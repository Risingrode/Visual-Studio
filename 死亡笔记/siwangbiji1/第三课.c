/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<conio.h>*/

//内存传递
/*int main(void) {	
//函数
	/*int a[5] = { 34,23,56,87,54 };
	int maxNum = a[0];
	int i;
	for(i=0;i<5;i++){
		if (maxNum < a[i]) {
			maxNum = a[i];
		}
	}
	printf("%d\n", maxNum);
//参数 返回  函数名字要能看懂  第一个单词首字母要大写 若都用小写用下划线分割
	/*void fun(void) {}//无参有返
	int main(void){}//有参有返
	void fun(int a,double b){}//类型，个数，顺序  形参 实参
	返回值是 return 字母或者数字;
//系统函数与自定义函数
	//函数地址	
	int a = 2;
	fun(a);
	printf("%d,%p\n", a,&a);
}*/
/*int fun(int n) {
	return 3;
}
int main(int s) {
	int a=0;	
	printf("%d\n", fun(a));
	//int s = 1;
	printf("%d", s);
	return 9;
}*/
//例子  数字互换
/*void fun(p);
void fun1(p1);*/
/*void fun(p) {
	
	printf("%d,%p\n", p,&p);
	printf("长得帅\n");
	printf("长得真帅帅\n");
}
void fun1(p1) {
	printf("真厉害\n");
}
int main(void) {
	int a = 4;
	printf("%d,%p\n", a,&a);
	fun(a);
	fun1(a);
	printf("%d,%p\n", a,&a);
}*/
//抽调函数
/*void fun(int* p1, int* p2) {
	int m = *p1;
	int n = *p2;
	*p1 = n;
	*p2 = m;
}
void fun1(int* p, int nLength )//
{
	int i = 0;
for (i = 0; i < 4; i++) {
	printf("%d\n", p[i]);
	}
}
void fun2(int p2[2][3]) {
	printf("%d,%d,%d\n", p2[0][1], p2[0][2], p2[0][0]);
}
int main(void) {//temp的运算  *p==p[数字]  指针
	int a = 1, b = 2;
	printf("%d,%d\n", a, b);
	fun(&a, &b);
	printf("%d,%d\n", a, b);
	int c[4] = { 1,2,3,4 };
	fun1(c, 4);
	int g[2][3] = { {1,2,3,},{4,5,6} };
	fun2(g);
	return 0;
}*/
//函数地址
//int fun2(int a,int b)   类型是int (int a,int b)   地址是fun2
/*int fun2(int a, int b) {
	printf("我真帅\n");
	return 0;
}
int main(void) 
{
	int(* p)(int ,int) = fun2;//重点
	printf("%p\n", p);
	fun2;
}*/
//递归函数（自己调用自己）  超级重点  要多写   先主函数，在副函数
/*void fun(int n) {
	if (n>0){
	printf("%d\n",n);
	fun(n-1);
	printf("%d\n", n);
	}
}
int main(void) {
	fun(5);
}*/
//斐波那契数列 未完成
/*int fun(int n)
{
	if (1 == n || 2 == n)
	{   		
		return 1;
	}
	else
		for (int i = 1; i <= 100; i++)
		{
			return fun(n - 1) + fun(n - 2);		
		}
}
int main(void){
	int n=9;
	n++;
	printf("%d\n", fun(n));	
}*/
/*int main() {
	//
	int a[2][2] = { {2,4},{5,9} };
	int (*p)[2][2] = &a;
	printf("%p\n%p\n%p\n",p[1], p[1][1],a);	
	int *n = &a;
    int(*m)[2][2] =&a;	
	printf("%d\n", (*m)[1][1]);
	return 0;
}*/

/*int fun(int n) {
	if (1 == n || 2 == n)
		return 1;
	else 
		return fun(n-1) + fun(n - 2);
}
int main() {
	int x;
	scanf_s("%d", &x);
    printf("%d\n", fun(x));
}*/
//递归只是形式简单   代码少
//参数个数不确定的函数
/*void fun(int a, ...)//指定个数
{
	va_list ap;//定义数组
	va_start(ap, a);//装数组
	printf("%d\n", va_arg(ap, int));
	printf("%lf\n", va_arg(ap, double));
	printf("%d\n", va_arg(ap, int));
}
int main(void) {
	fun(3, 12, 34.13, 45);//3是个数
	return 0;
}*/
//字符类型  ascII表  c%英文大写小写

//单引号 标明一个字符是字符
/*int main(void) {
	printf("%c\n", 'a');
	printf("%d\n", 'a');//字符本质是数字
	putchar('a');
	putchar('\n');
}*/
//字符变量 char
/*int main(void) {//如果想用scanf需要加宏
	int a;
	scanf_s("%d", &a);//从缓冲区中拿数据
    printf("%d\n", a);
	char c;
	c = _getch();//不用回车
	printf("%c\n", c);
	
	//setbuf(stdin, NULL);//清空缓冲区
	//while((c=getchar())!='n'&&c!=EOF);这个最标准
	return 0;
}*/
//大小写字母转换//利用表上的数字加减进行转换
/*int main(void) {
	char c=12;
	//scanf_s("%c", &c);
	printf("%c\n", 99);
	printf("%d\n", 'c');
	printf("%c\n", 'c');
	printf("%d\n", 99);
	printf("%d\n", c);
}*/
//字符数组  与前面所学知识类似
/*int main(void) {
	char arr[4] = { 'A','b','c','d' };
	int i = 0;
	char *ptr = arr;
	arr[2] = 'w';//对第三个进行赋值
	for (i=0; i < 4; i ++ ) {
		printf("%d\n",ptr[i] );//*(ptr+i)=(*ptr+i)=ptr[i]=*ptr++
		printf("%p\n", &ptr[i]);
		printf("%c\n", arr[i]);
	}
	return 0;
}*/
//字符串  以'\0'结尾的字符数组
/*void OutString(char* str1) {
	for (str1; *str1 != '\0'; str1++) {
		putchar(*str1);//输出字符串
		putchar('\n');//每一个都换行
	}
	putchar('\n');//字符串换行
}
int main() {
   char arr[5] = { 'A','b','c','d','\0'};//    \0算一个空位
   //OutString (arr);
   //printf("%s\n", arr);//%s只打印字符串
   //puts(&arr);//打印字符串
}*/
//常量字符串
/*int main(void) {
	printf("%s\n","hellow c3~");//双引号返回字符串首地址
	char* m = "hellow c3";
	printf("%s\n",m);//必须是p
	return 0;
}*/
//初始化字符数组以及赋值
/*int main(void) {
	char str[] = "hellow c3";
	printf("%s\n",str);
	int i = 0;
	char st[10] = "hellow";
	char* p = "world srt";
	printf("%s\n", st);
	for (; *p != '\0'; p++)//第一个位置可以不写
	{
		st[i] = *p;
		i++;
	}
	printf("%s\n", st);
	return 0;
}*/
//强势赋值 strcpy和strncpy  都可以加上_s
/*int main(void) {
	char str[10] = "hellow c3";
	printf("%s\n", str);
	char str1[10] = "world";
	char* p = str1;
	strcpy(str, "zhenshuai");
	strcpy(str1,"shouer");
	printf("%s\n", str1);
	printf("%s\n", str);
	strncpy(str1, "ceshi", 3);//3是替换字节数
	printf("%s\n", str1);
	return 0;
}*/

/*int main(void) {
	char str[8] = {1,2,3,4,6};
	gets_s(str, 8);//
	gets(str);
	scanf_s("%s", str,8);//%s自动加\0      //\0表示结束
	printf("%s\n", str);
	return 0;
	
}*/
//汉字与字符
/*int main(void) {
	char str[3] = "宝";//一个汉字两个字节  现在申请了3个字节
	printf("%s\n", str);
	printf("%c%c\n", str[0], str[1]);
	printf("%x%x\n", str[0], str[1]);//得到汉字的十六进制
	printf("%x  %x\n", *（short*)str, *（short*)str);
	return 0;
}*/
//字符串操作函数
/*int main(void) {
	//char* p = "12345";
	//size_t a = strlen("123456");//求字符数
	//printf("%d\n", a);
	int a = strcmp("abcs", "abcx");//比较字符串大小 常放在if语句中
	printf("%d\n", a);//正负零  1式>2式,则a>0
	return 0;
}*/
//atoi 与_itoa_s与sprintf     itoa在此版本行不通
/*int main(void) {
	char str[20] = { 0 };
	int a = atoi("12q345qwe");//字符串转化为整数
	printf("%d\n", a);
	int a1 = atoi("12345qwe");
	printf("%d\n", a1);
    _itoa_s(200, str,20, 10);//整数化为字符串  数字+名+字节（不要太小）+进制
	printf("%s\n", str);
	sprintf(str, "%d,%c,%f\n", 12, 'a', 12.3f);//格式化字符串  要写宏
	printf("%s\n", str);
	return 0;
}*/
//转义字符\   转换说明符%   \+字母 1字节  \+数字（0~377）   8进制  \+0+数字  （0~77）8进制
//   \+x+数字  16进制 0~255
/*int main() {
	printf("\tqweras");
	printf("qweras\r\n");
	printf("\' \" \\ \n");//输出符号
}*/
//二维字符数组
/*int main() {
	char str[2][4] = { "qwe","123"};

	printf(str[0]);
	printf(str[1]);
}*/
//结构类型
/*struct Stu {
	char name[10];
	int age;
	double high;
	char num[20];
}stu2;//要有分号
int main(void) {
	struct Stu stu1 = { "c3程序猿",20,1.77,"20200907"};//定义 注意字符串
	printf("%s,%d,%lf,%s\n",stu1.name,stu1.age,stu1.high,stu1.num);
	struct Stu* p = (struct Stu*)malloc(sizeof(stu1));
	//p->age=20;
	//(*p).high = 1.77;
	//strcpy((*p).name, "c3");
	printf("%p,%p,%p,%p\n", p->name, p->age, p->high, p->num);
	*p =("c3程序猿", 20, 1.77, "20200907");//复合文字赋值  未完成
	printf("%s,%d,%lf,%s\n", stu1.name, stu1.age, stu1.high, stu1.num);
	printf("%p,%p,%p,%p\n", p->name, p->age, p->high, p->num);
	return 0;
}*/
//指针与函数
/*struct Stu {
	int* p;
};
int main(void) {
	int a[4] = { 1,2,3,4 };
	struct Stu st = { (int*)malloc(20) };
	st.p[0] = 9;
	st.p[2] = 8;
	printf("%d,%d\n", st.p[0], st.p[2]);
	return 0;
}*/
/*void fun(void) {
	printf("帅\n");
}
struct Stu {
	void(*p) (void);
};
int main(void) {
	struct Stu st = { &fun };//fun=&fun
	st.p();
}*/
//结构体嵌套  不能套中套，只能两个套在外面
/*struct Stu {
	char name[10];
	int age;
};
struct Stm {
	double high;
	float deep;
	struct Stu st;
};
int main(void) {
	struct Stm sc = { 1.77,2.5,"明",20};
	printf("%f,%f,%s,%d\n", sc.deep, sc.high, sc.st.name, sc.st.age);
	return 0;
}*/
//结构体数组
/*struct Stu
{
	char name[10];
	int age;
};
int main(void) 
{
	struct Stu su[3] = { {"小明",26},{"小华"}, {"小李",23} };
	printf("%s,%d\n", su[1].name, su[1].age);//无值默认为零
}*/
//结构体大小
/*#pragma pack(1)//与多少字节对齐
struct Stu {
	int a;//和最大字节的对齐 再补齐
	int b;
	char c;
	double d;
};
int main(void) {
	printf("%u\n", sizeof(struct Stu));//u和d都可以
	printf("%d\n", sizeof(double));
}*/
//union    多个值塞进相同地址
/*union Un {
	int a;
	short b;
	double c;
	char d;
}un1;
int main(void) {
	printf("%p\n%p\n%p\n", &un1.a, &un1.b, &un1.c);
	union Un un1= { 20 };
	un1.a = 29;
	printf("%d\n", un1.b);
	printf("%u\n", sizeof(un1));//按最大字节
	return 0;
}*/
//枚举  给整型常数起名字  名字只能存在一次
/*enum Color {
	red,black,blue,yellow=70,white
};
int main(void) {
	printf("%d,%d,%d,%d,%d\n", red, black, blue, yellow, white);
	printf("%u\n", sizeof(enum Color));
}*/
//强制类型转换
/*int main(void) {
	printf("%lf,%d\n", 12 + 12.3, 12 + (int)12.3);
}*/
//强转指针  小字节指向大字节
/*int main(void) {//指针地址或者类型决定指针或地址的读写方式
	double a = 12.9;
	int* p = (int*)&a;
	*p = 12;
	*(p + 1)= 22;
	printf("%d,%d\n", *(int*)&a,(int *)*(p+1) );
	*(int*)((short*)p + 1) = 29;
	printf("%d\n", *(int*)((char*)p + 2) );
	return 0;
}*/
//大小端存储  强转
/*int main(void) {
	int a = 134480385;
	int temp;
	char *p=(char*)&a;
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n",
		&p[0], p[0], &p[1], p[1], &p[2], p[2], &p[3], p[3]);
	temp = p[0];
	p[0] = p[3];
	p[3] = temp;
	temp = p[1];
	p[1] = p[2];
	p[2] = temp;
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n",
		&p[0], p[0], &p[1], p[1], &p[2], p[2], &p[3], p[3]);
	printf("%d\n", a);
	return 0;
}*/
//联合
/*union Un {
	int i;
	char c[4];
}u={85};
int main(void) {
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n",
		&u.c[0], u.c[0], &u.c[1], u.c[1], &u.c[2], u.c[2], &u.c[3], u.c[3] );
	return 0;
}*/
//重命名  用于方便
/*typedef int myint;//可在主函数外面，也可在里面
typedef int yourint;
typedef unsigned unint;
typedef int*** pint;
typedef struct  {
	int a;
}_Node;//_Node是指结构体
typedef void(*pFun)(int, double);//模式为pFun

int main(void) {
	myint a;
	yourint a;
	int a;
}*/
//宏
/*#define ONE 1  //替换
#define TWO 1+6
#define PRINTF printf("%d,%d\n",ONE,TWO);
#define PRINT(x)printf("%d\n",(x)*2);
#define PRIN(x,y)printf("%d\n",(x)*(y));
//注意标准写法
#define MAX(x,y)printf("%d\n",(x)>(y)?(x):(y));//比大小
#define PIN printf("asd");\
                 printf("fgh");//拼接
//#相当于给字符串加了双引号
#define PIT(x,y) #x###y printf("%s\n", PIT(x,y));
//## 拼接字符串
int main(void) {
	printf("%d,%d\n", ONE, TWO);
	printf("%d\n", ONE+ TWO);
	PRINTF
	PRINT(4);
	PRIN (7, 8);
	MAX(6,8) ;
	PIN ;
	PIT (asd,fgh);
}*/
//多文件
















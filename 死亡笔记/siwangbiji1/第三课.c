/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<conio.h>*/

//�ڴ洫��
/*int main(void) {	
//����
	/*int a[5] = { 34,23,56,87,54 };
	int maxNum = a[0];
	int i;
	for(i=0;i<5;i++){
		if (maxNum < a[i]) {
			maxNum = a[i];
		}
	}
	printf("%d\n", maxNum);
//���� ����  ��������Ҫ�ܿ���  ��һ����������ĸҪ��д ������Сд���»��߷ָ�
	/*void fun(void) {}//�޲��з�
	int main(void){}//�в��з�
	void fun(int a,double b){}//���ͣ�������˳��  �β� ʵ��
	����ֵ�� return ��ĸ��������;
//ϵͳ�������Զ��庯��
	//������ַ	
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
//����  ���ֻ���
/*void fun(p);
void fun1(p1);*/
/*void fun(p) {
	
	printf("%d,%p\n", p,&p);
	printf("����˧\n");
	printf("������˧˧\n");
}
void fun1(p1) {
	printf("������\n");
}
int main(void) {
	int a = 4;
	printf("%d,%p\n", a,&a);
	fun(a);
	fun1(a);
	printf("%d,%p\n", a,&a);
}*/
//�������
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
int main(void) {//temp������  *p==p[����]  ָ��
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
//������ַ
//int fun2(int a,int b)   ������int (int a,int b)   ��ַ��fun2
/*int fun2(int a, int b) {
	printf("����˧\n");
	return 0;
}
int main(void) 
{
	int(* p)(int ,int) = fun2;//�ص�
	printf("%p\n", p);
	fun2;
}*/
//�ݹ麯�����Լ������Լ���  �����ص�  Ҫ��д   �����������ڸ�����
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
//쳲��������� δ���
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
//�ݹ�ֻ����ʽ��   ������
//����������ȷ���ĺ���
/*void fun(int a, ...)//ָ������
{
	va_list ap;//��������
	va_start(ap, a);//װ����
	printf("%d\n", va_arg(ap, int));
	printf("%lf\n", va_arg(ap, double));
	printf("%d\n", va_arg(ap, int));
}
int main(void) {
	fun(3, 12, 34.13, 45);//3�Ǹ���
	return 0;
}*/
//�ַ�����  ascII��  c%Ӣ�Ĵ�дСд

//������ ����һ���ַ����ַ�
/*int main(void) {
	printf("%c\n", 'a');
	printf("%d\n", 'a');//�ַ�����������
	putchar('a');
	putchar('\n');
}*/
//�ַ����� char
/*int main(void) {//�������scanf��Ҫ�Ӻ�
	int a;
	scanf_s("%d", &a);//�ӻ�������������
    printf("%d\n", a);
	char c;
	c = _getch();//���ûس�
	printf("%c\n", c);
	
	//setbuf(stdin, NULL);//��ջ�����
	//while((c=getchar())!='n'&&c!=EOF);������׼
	return 0;
}*/
//��Сд��ĸת��//���ñ��ϵ����ּӼ�����ת��
/*int main(void) {
	char c=12;
	//scanf_s("%c", &c);
	printf("%c\n", 99);
	printf("%d\n", 'c');
	printf("%c\n", 'c');
	printf("%d\n", 99);
	printf("%d\n", c);
}*/
//�ַ�����  ��ǰ����ѧ֪ʶ����
/*int main(void) {
	char arr[4] = { 'A','b','c','d' };
	int i = 0;
	char *ptr = arr;
	arr[2] = 'w';//�Ե��������и�ֵ
	for (i=0; i < 4; i ++ ) {
		printf("%d\n",ptr[i] );//*(ptr+i)=(*ptr+i)=ptr[i]=*ptr++
		printf("%p\n", &ptr[i]);
		printf("%c\n", arr[i]);
	}
	return 0;
}*/
//�ַ���  ��'\0'��β���ַ�����
/*void OutString(char* str1) {
	for (str1; *str1 != '\0'; str1++) {
		putchar(*str1);//����ַ���
		putchar('\n');//ÿһ��������
	}
	putchar('\n');//�ַ�������
}
int main() {
   char arr[5] = { 'A','b','c','d','\0'};//    \0��һ����λ
   //OutString (arr);
   //printf("%s\n", arr);//%sֻ��ӡ�ַ���
   //puts(&arr);//��ӡ�ַ���
}*/
//�����ַ���
/*int main(void) {
	printf("%s\n","hellow c3~");//˫���ŷ����ַ����׵�ַ
	char* m = "hellow c3";
	printf("%s\n",m);//������p
	return 0;
}*/
//��ʼ���ַ������Լ���ֵ
/*int main(void) {
	char str[] = "hellow c3";
	printf("%s\n",str);
	int i = 0;
	char st[10] = "hellow";
	char* p = "world srt";
	printf("%s\n", st);
	for (; *p != '\0'; p++)//��һ��λ�ÿ��Բ�д
	{
		st[i] = *p;
		i++;
	}
	printf("%s\n", st);
	return 0;
}*/
//ǿ�Ƹ�ֵ strcpy��strncpy  �����Լ���_s
/*int main(void) {
	char str[10] = "hellow c3";
	printf("%s\n", str);
	char str1[10] = "world";
	char* p = str1;
	strcpy(str, "zhenshuai");
	strcpy(str1,"shouer");
	printf("%s\n", str1);
	printf("%s\n", str);
	strncpy(str1, "ceshi", 3);//3���滻�ֽ���
	printf("%s\n", str1);
	return 0;
}*/

/*int main(void) {
	char str[8] = {1,2,3,4,6};
	gets_s(str, 8);//
	gets(str);
	scanf_s("%s", str,8);//%s�Զ���\0      //\0��ʾ����
	printf("%s\n", str);
	return 0;
	
}*/
//�������ַ�
/*int main(void) {
	char str[3] = "��";//һ�����������ֽ�  ����������3���ֽ�
	printf("%s\n", str);
	printf("%c%c\n", str[0], str[1]);
	printf("%x%x\n", str[0], str[1]);//�õ����ֵ�ʮ������
	printf("%x  %x\n", *��short*)str, *��short*)str);
	return 0;
}*/
//�ַ�����������
/*int main(void) {
	//char* p = "12345";
	//size_t a = strlen("123456");//���ַ���
	//printf("%d\n", a);
	int a = strcmp("abcs", "abcx");//�Ƚ��ַ�����С ������if�����
	printf("%d\n", a);//������  1ʽ>2ʽ,��a>0
	return 0;
}*/
//atoi ��_itoa_s��sprintf     itoa�ڴ˰汾�в�ͨ
/*int main(void) {
	char str[20] = { 0 };
	int a = atoi("12q345qwe");//�ַ���ת��Ϊ����
	printf("%d\n", a);
	int a1 = atoi("12345qwe");
	printf("%d\n", a1);
    _itoa_s(200, str,20, 10);//������Ϊ�ַ���  ����+��+�ֽڣ���Ҫ̫С��+����
	printf("%s\n", str);
	sprintf(str, "%d,%c,%f\n", 12, 'a', 12.3f);//��ʽ���ַ���  Ҫд��
	printf("%s\n", str);
	return 0;
}*/
//ת���ַ�\   ת��˵����%   \+��ĸ 1�ֽ�  \+���֣�0~377��   8����  \+0+����  ��0~77��8����
//   \+x+����  16���� 0~255
/*int main() {
	printf("\tqweras");
	printf("qweras\r\n");
	printf("\' \" \\ \n");//�������
}*/
//��ά�ַ�����
/*int main() {
	char str[2][4] = { "qwe","123"};

	printf(str[0]);
	printf(str[1]);
}*/
//�ṹ����
/*struct Stu {
	char name[10];
	int age;
	double high;
	char num[20];
}stu2;//Ҫ�зֺ�
int main(void) {
	struct Stu stu1 = { "c3����Գ",20,1.77,"20200907"};//���� ע���ַ���
	printf("%s,%d,%lf,%s\n",stu1.name,stu1.age,stu1.high,stu1.num);
	struct Stu* p = (struct Stu*)malloc(sizeof(stu1));
	//p->age=20;
	//(*p).high = 1.77;
	//strcpy((*p).name, "c3");
	printf("%p,%p,%p,%p\n", p->name, p->age, p->high, p->num);
	*p =("c3����Գ", 20, 1.77, "20200907");//�������ָ�ֵ  δ���
	printf("%s,%d,%lf,%s\n", stu1.name, stu1.age, stu1.high, stu1.num);
	printf("%p,%p,%p,%p\n", p->name, p->age, p->high, p->num);
	return 0;
}*/
//ָ���뺯��
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
	printf("˧\n");
}
struct Stu {
	void(*p) (void);
};
int main(void) {
	struct Stu st = { &fun };//fun=&fun
	st.p();
}*/
//�ṹ��Ƕ��  ���������ף�ֻ��������������
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
	struct Stm sc = { 1.77,2.5,"��",20};
	printf("%f,%f,%s,%d\n", sc.deep, sc.high, sc.st.name, sc.st.age);
	return 0;
}*/
//�ṹ������
/*struct Stu
{
	char name[10];
	int age;
};
int main(void) 
{
	struct Stu su[3] = { {"С��",26},{"С��"}, {"С��",23} };
	printf("%s,%d\n", su[1].name, su[1].age);//��ֵĬ��Ϊ��
}*/
//�ṹ���С
/*#pragma pack(1)//������ֽڶ���
struct Stu {
	int a;//������ֽڵĶ��� �ٲ���
	int b;
	char c;
	double d;
};
int main(void) {
	printf("%u\n", sizeof(struct Stu));//u��d������
	printf("%d\n", sizeof(double));
}*/
//union    ���ֵ������ͬ��ַ
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
	printf("%u\n", sizeof(un1));//������ֽ�
	return 0;
}*/
//ö��  �����ͳ���������  ����ֻ�ܴ���һ��
/*enum Color {
	red,black,blue,yellow=70,white
};
int main(void) {
	printf("%d,%d,%d,%d,%d\n", red, black, blue, yellow, white);
	printf("%u\n", sizeof(enum Color));
}*/
//ǿ������ת��
/*int main(void) {
	printf("%lf,%d\n", 12 + 12.3, 12 + (int)12.3);
}*/
//ǿתָ��  С�ֽ�ָ����ֽ�
/*int main(void) {//ָ���ַ�������;���ָ����ַ�Ķ�д��ʽ
	double a = 12.9;
	int* p = (int*)&a;
	*p = 12;
	*(p + 1)= 22;
	printf("%d,%d\n", *(int*)&a,(int *)*(p+1) );
	*(int*)((short*)p + 1) = 29;
	printf("%d\n", *(int*)((char*)p + 2) );
	return 0;
}*/
//��С�˴洢  ǿת
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
//����
/*union Un {
	int i;
	char c[4];
}u={85};
int main(void) {
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n",
		&u.c[0], u.c[0], &u.c[1], u.c[1], &u.c[2], u.c[2], &u.c[3], u.c[3] );
	return 0;
}*/
//������  ���ڷ���
/*typedef int myint;//�������������棬Ҳ��������
typedef int yourint;
typedef unsigned unint;
typedef int*** pint;
typedef struct  {
	int a;
}_Node;//_Node��ָ�ṹ��
typedef void(*pFun)(int, double);//ģʽΪpFun

int main(void) {
	myint a;
	yourint a;
	int a;
}*/
//��
/*#define ONE 1  //�滻
#define TWO 1+6
#define PRINTF printf("%d,%d\n",ONE,TWO);
#define PRINT(x)printf("%d\n",(x)*2);
#define PRIN(x,y)printf("%d\n",(x)*(y));
//ע���׼д��
#define MAX(x,y)printf("%d\n",(x)>(y)?(x):(y));//�ȴ�С
#define PIN printf("asd");\
                 printf("fgh");//ƴ��
//#�൱�ڸ��ַ�������˫����
#define PIT(x,y) #x###y printf("%s\n", PIT(x,y));
//## ƴ���ַ���
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
//���ļ�
















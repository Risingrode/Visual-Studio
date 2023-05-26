#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//int main(void) {
	//能少能缺能空  数组
	/*int a[5] = { 1,6,7,5,4 };
	int* p = &a;
	printf("%p,%p,%p\n", p, p + 1, p + 2);
	printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
	printf("%p,%p,%p,%p,%p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);*/
	//二维数组
/*int main() {
int b[3][2] = {1,2,3,4,5,6};
	printf("%d,%d,%d,%d,%d,%d\n", b[0][0], b[0][1], b[1][0], b[1][1], b[2][0], b[2][1]);
	printf("%p,%p,%p,%p,%p,%d\n", &b[0][0], &b[0][1],& b[1][0], &b[1][1], 
	&b[2][0], &b[2][1]);
	printf("%p,%p,%p,%p\n", &b[0][0]+1,&b[1][0], &b[1][1], &b[2][0]+1);
	printf("%p,%d\n",&b[0],b[0]);//&a[n]=a[n][0]
	printf("%d\n",&b);//&b+1地址是数组最后一个数字地址加4
}*/
	
/*int main() {
	struct str {
		int a;
		int b;
	}c[2] = { 1,3,2,6 };//
	printf("%d", c[0].a* c[1].b / c[0].b);
	//1*6/2
}*/
//普通学习	
	/*memcpy(&b[0], &a[0], sizeof(int) * 5);  //不要越界赋值  目标数组+被复制的数组+要复制的字节数
	memcpy   内存拷贝     不要忘记加上头文件
    int装整型 float装浮点型 指针装地址  指针学习

	int a[5] = { 1,2,3,4,5 };
	int b[5];//
	
	memcpy(&b[0], &a[0], sizeof(int) * 5);
	printf("%d,%d,%d,%d,%d\n", b[0], b[1], b[2], b[3], b[4]);

    int* p;
	float* f;
	double* d;
	short* s;*/
//指针
	/*int a = 12;
	int *p = &a;
	printf("%p,%p,%p,%d,%d\n",&p, p, &a,*p,a);//*p与a相同
	*p = 145;
	printf("%d\n",a);
	printf("%p", &*p);//*p等于a的地址*/
//二级指针
	/*int a = 12;
	int* p = &a;
	int** p1 = &p;
	*p == a;
	*p1 == p;
	**p1 == *p == a;
	printf("%p,%p,%p,%p,%p,%p\n",&a,p,&p,p1,*p1,&p1);
	printf("%d,%d,%d\n", **p1, *p, a);*/
//语句嵌合
	/*int a[4] = {4,5,6,7};
	int* p = &a;
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		printf("数值：%d\n", *(p + i));
		printf("地址：%p\n", p + i);
		//*p++ ==*(p++)   
	}*/
//指针与下标运算
/*int main() {
int a[3] = {7,5,6};//a不可被赋值
	int* p = &a;
	printf("%p,%p,%p\n", p[0], p[1], p[2]);//p[2]=*(p+2)
	printf("%d,%d,%d\n", p[0], p[1], p[2]); //    *（p+2)=*(2+p)=2[p]   
}*/
	
//指针数组
	/*int b = 1,
		c = 2,
		d = 3;
	int* a[100] = { &b,&c,&d };//a[0]==&b,*a[0]==b
	printf("%d\n", d);
	*a[2] = 43;
	printf("%d\n", d);*/
//拉链结构
/*int main() {
    int b[2] = {5,8};
	int c[3] = { 9,8,6};
	int d[3] = { 7,5,8 };
	int* a[4] = { b[1],c,d,&b[0] };
	printf("%p,%d\n", &b[0], b[0]);
	//printf("%d\n", a[2][1]);
	printf("%d,%p\n", *a[3],a[3]);
	//printf("%p\n", a[3]);
}*/
	
	//两层下标运算  用逻辑推*/
//数组指针
	/*int a[4] = {4,5,3,7};
	int* p = &a[2];
	printf("%p,%p,%p,%p,%p,%d\n",&a[0], &a[1], &a[2], &a[3], p, *p);
	int(*p1)[4] = &a;//*p1=a
	printf("%p,%p,%p,%p,%p\n", &(*p1)[0], &(*p1)[1], &(*p1)[2], &(*p1)[3], &a[2]);*/
//二维数组指针  未完成 差一点

/*int main(void) {
	int a[2][3] = {{2,4,1},{8,6,7}};
	int* p = &a[1][1];//装元素地址
	int(*p1)[3] = &a[1];//a[1]区中有3个元素，所以3  装楼层地址
	int(*p2)[2][3]= &a;//数组指针  a=&a[0][0]  装小区地址
	int i=0, j=0;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d,%d,%p,%p\n", a[i][j],(*p2)[i][j],&a[i][j],&(*p2)[i][j]);
		}
	}
	printf("%d,%d,%p\n",*p,*(p+1),p );//
	printf("%d,%p\n", (*p1)[1], (p1)[1]);
	printf("%p\n",&a[1][1] );
	printf("%d,%p\n",(*p2)[1][2],p2[1][1]);//     *p2=a     
}*/
//利用指针遍历二维数组  
	/*int a[2][3] = {{6,5,9},{4,6,2}};
	//int* p = a[0];//a[0]=&a[0][0]
	//printf("%d,%d,%d,%d,%d,%d\n", *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4), *(p + 5));//*(p+n)=p[n]
	//printf("%p,%p,%p,%p,%p,%p\n", &p, &p + 1, &p + 2, &p + 3, &p + 4, &p + 5);
	int(* p)[3] = &a[0];// *p==a[0]
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d,%p,%d,%p\n",(*p)[i], &(*p)[i], (*p+3)[i], &(*p+3)[i]);
	}*/
//指针变量大小
	/*int* p;
	short* p1;
	long* p2;
	long long* p3;
	printf("%d,%d\n",sizeof(*p),sizeof(*p1));
	//x32系统无法编译sizeof，最大字节是4字节，x64最大是8字节
	printf("%d,%d\n",sizeof(*p2),sizeof(*p3));//sizeof用来获取字节大小
	printf("%d,%d\n", sizeof(long), sizeof(long long));*/
//栈区（堆区）变量   系统申请内存
    //int a[1024*1024];//内存大小
//堆区  malloc//头文件stdio.h  malloc.h    自己申请内存
    /*强制类型转换  size_t = unsigned int 32位4字节，64位8字节
	NULL;
    int p1=0;
	int a = sizeof(size_t);
	printf("%d\n", sizeof(a));
	malloc(9000);
	//p1= (int*)malloc(4);//p1=(int*)malloc(sizeof(int））
	//指针自身=（指针类型*）malloc(sizeof(指针类型）*数据变量）
	for (p1 = 0; p1 <= 100; p1++) {
    //printf("%d,%p\n", p1,&p1);
	}*/
//malloc使用 不要越界赋值 数字要大   注意边界  内存泄漏
//free  释放空间	  
//memset 初始化内存  memset(指针或数组名字，赋的值，sizeof长度）
/*int main() {
    int* p = (int*)malloc(4);
	*p = 12;
	printf("%d,%p\n", *p, p);
	memset(p, 0, 0);//指针或数组+赋的值+位数
	free(p);
	p = NULL;
	printf("%d,%p\n", *p, p);
}*/
/*int main() {
	int* a = (int*)malloc(8);
	int p;	
	memset(*a, 0, 8);
	printf("%d\n", *a);
}*/
	
//malloc申请一维数组
 //   int* p = (int*)malloc(sizeof(int) * 5);=(int*)malloc(4 * 5)
	//int a[5];
	//int a[5];
 //   int(*p)[2][3] = (int(*)[2][3])malloc(sizeof(int) * 2 * 3);
	//int a[2][3];
	//int(*p1)[2][3] = &a;
	//
	//printf("%p,%p\n\n", p[0],p1[0]);//*(*(*p+1)+2)==(*p)[1][2]
	//int i = 0;
	//for (i = 0; i < 6; i++) {
	//	printf("%p,%p\n", p[i],p1[i]);
	//}
//calloc学习  申请一段数组空间  注意头文件与malloc相同
//    int* p = (int*)malloc(20);
//	int *p=(int*)calloc(5, 4);//申请5个元素，每个元素4字节,共20字节
//	size_t a = _msize(p);
//	printf("%d\n",a );//得出a的字节数
//	int* p1 = (int*)realloc(p, 20);//若地址不够，可以跳转申请地址~碎片内存
//	printf("%d\n", );
//	printf("%d,%d,%d,%d,%d\n", p[0], p[1], p[2], p[3], p[4]);
//
//	free(p);
////*的作用  1.声明时候是指针 int*p
//	//2.*+地址  表示地址操作符 *p
//	//3.1*2 表示乘法
//	//4.注释/**/
//
//

//	system("pause");
//    return 0;
//}
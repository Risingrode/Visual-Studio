#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//int main(void) {
	//������ȱ�ܿ�  ����
	/*int a[5] = { 1,6,7,5,4 };
	int* p = &a;
	printf("%p,%p,%p\n", p, p + 1, p + 2);
	printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
	printf("%p,%p,%p,%p,%p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);*/
	//��ά����
/*int main() {
int b[3][2] = {1,2,3,4,5,6};
	printf("%d,%d,%d,%d,%d,%d\n", b[0][0], b[0][1], b[1][0], b[1][1], b[2][0], b[2][1]);
	printf("%p,%p,%p,%p,%p,%d\n", &b[0][0], &b[0][1],& b[1][0], &b[1][1], 
	&b[2][0], &b[2][1]);
	printf("%p,%p,%p,%p\n", &b[0][0]+1,&b[1][0], &b[1][1], &b[2][0]+1);
	printf("%p,%d\n",&b[0],b[0]);//&a[n]=a[n][0]
	printf("%d\n",&b);//&b+1��ַ���������һ�����ֵ�ַ��4
}*/
	
/*int main() {
	struct str {
		int a;
		int b;
	}c[2] = { 1,3,2,6 };//
	printf("%d", c[0].a* c[1].b / c[0].b);
	//1*6/2
}*/
//��ͨѧϰ	
	/*memcpy(&b[0], &a[0], sizeof(int) * 5);  //��ҪԽ�縳ֵ  Ŀ������+�����Ƶ�����+Ҫ���Ƶ��ֽ���
	memcpy   �ڴ濽��     ��Ҫ���Ǽ���ͷ�ļ�
    intװ���� floatװ������ ָ��װ��ַ  ָ��ѧϰ

	int a[5] = { 1,2,3,4,5 };
	int b[5];//
	
	memcpy(&b[0], &a[0], sizeof(int) * 5);
	printf("%d,%d,%d,%d,%d\n", b[0], b[1], b[2], b[3], b[4]);

    int* p;
	float* f;
	double* d;
	short* s;*/
//ָ��
	/*int a = 12;
	int *p = &a;
	printf("%p,%p,%p,%d,%d\n",&p, p, &a,*p,a);//*p��a��ͬ
	*p = 145;
	printf("%d\n",a);
	printf("%p", &*p);//*p����a�ĵ�ַ*/
//����ָ��
	/*int a = 12;
	int* p = &a;
	int** p1 = &p;
	*p == a;
	*p1 == p;
	**p1 == *p == a;
	printf("%p,%p,%p,%p,%p,%p\n",&a,p,&p,p1,*p1,&p1);
	printf("%d,%d,%d\n", **p1, *p, a);*/
//���Ƕ��
	/*int a[4] = {4,5,6,7};
	int* p = &a;
	int i = 0;
	for (i = 0; i <= 3; i++)
	{
		printf("��ֵ��%d\n", *(p + i));
		printf("��ַ��%p\n", p + i);
		//*p++ ==*(p++)   
	}*/
//ָ�����±�����
/*int main() {
int a[3] = {7,5,6};//a���ɱ���ֵ
	int* p = &a;
	printf("%p,%p,%p\n", p[0], p[1], p[2]);//p[2]=*(p+2)
	printf("%d,%d,%d\n", p[0], p[1], p[2]); //    *��p+2)=*(2+p)=2[p]   
}*/
	
//ָ������
	/*int b = 1,
		c = 2,
		d = 3;
	int* a[100] = { &b,&c,&d };//a[0]==&b,*a[0]==b
	printf("%d\n", d);
	*a[2] = 43;
	printf("%d\n", d);*/
//�����ṹ
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
	
	//�����±�����  ���߼���*/
//����ָ��
	/*int a[4] = {4,5,3,7};
	int* p = &a[2];
	printf("%p,%p,%p,%p,%p,%d\n",&a[0], &a[1], &a[2], &a[3], p, *p);
	int(*p1)[4] = &a;//*p1=a
	printf("%p,%p,%p,%p,%p\n", &(*p1)[0], &(*p1)[1], &(*p1)[2], &(*p1)[3], &a[2]);*/
//��ά����ָ��  δ��� ��һ��

/*int main(void) {
	int a[2][3] = {{2,4,1},{8,6,7}};
	int* p = &a[1][1];//װԪ�ص�ַ
	int(*p1)[3] = &a[1];//a[1]������3��Ԫ�أ�����3  װ¥���ַ
	int(*p2)[2][3]= &a;//����ָ��  a=&a[0][0]  װС����ַ
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
//����ָ�������ά����  
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
//ָ�������С
	/*int* p;
	short* p1;
	long* p2;
	long long* p3;
	printf("%d,%d\n",sizeof(*p),sizeof(*p1));
	//x32ϵͳ�޷�����sizeof������ֽ���4�ֽڣ�x64�����8�ֽ�
	printf("%d,%d\n",sizeof(*p2),sizeof(*p3));//sizeof������ȡ�ֽڴ�С
	printf("%d,%d\n", sizeof(long), sizeof(long long));*/
//ջ��������������   ϵͳ�����ڴ�
    //int a[1024*1024];//�ڴ��С
//����  malloc//ͷ�ļ�stdio.h  malloc.h    �Լ������ڴ�
    /*ǿ������ת��  size_t = unsigned int 32λ4�ֽڣ�64λ8�ֽ�
	NULL;
    int p1=0;
	int a = sizeof(size_t);
	printf("%d\n", sizeof(a));
	malloc(9000);
	//p1= (int*)malloc(4);//p1=(int*)malloc(sizeof(int����
	//ָ������=��ָ������*��malloc(sizeof(ָ�����ͣ�*���ݱ�����
	for (p1 = 0; p1 <= 100; p1++) {
    //printf("%d,%p\n", p1,&p1);
	}*/
//mallocʹ�� ��ҪԽ�縳ֵ ����Ҫ��   ע��߽�  �ڴ�й©
//free  �ͷſռ�	  
//memset ��ʼ���ڴ�  memset(ָ����������֣�����ֵ��sizeof���ȣ�
/*int main() {
    int* p = (int*)malloc(4);
	*p = 12;
	printf("%d,%p\n", *p, p);
	memset(p, 0, 0);//ָ�������+����ֵ+λ��
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
	
//malloc����һά����
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
//callocѧϰ  ����һ������ռ�  ע��ͷ�ļ���malloc��ͬ
//    int* p = (int*)malloc(20);
//	int *p=(int*)calloc(5, 4);//����5��Ԫ�أ�ÿ��Ԫ��4�ֽ�,��20�ֽ�
//	size_t a = _msize(p);
//	printf("%d\n",a );//�ó�a���ֽ���
//	int* p1 = (int*)realloc(p, 20);//����ַ������������ת�����ַ~��Ƭ�ڴ�
//	printf("%d\n", );
//	printf("%d,%d,%d,%d,%d\n", p[0], p[1], p[2], p[3], p[4]);
//
//	free(p);
////*������  1.����ʱ����ָ�� int*p
//	//2.*+��ַ  ��ʾ��ַ������ *p
//	//3.1*2 ��ʾ�˷�
//	//4.ע��/**/
//
//

//	system("pause");
//    return 0;
//}
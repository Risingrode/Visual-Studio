/*#include<stdio.h>
#include<stdlib.h>*/
//int main()
//{//С��
	/*float f = 12.123;
	printf("%f", f);
	return 0;*/
//��++
	/*int a;
	int b;
	a = 7;
	b = ++a;
	printf("%d\n", b);
	return 0;*/
//�ȴ�С
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
//if��� ����� else�󲻼���
	/*int a;
	scanf_s("%d", &a);
	
	if (a>10)
	{
		printf("��˧\n", a);
	}
	else
	{
		printf("����˧\n", a);
	}
	return 0;*/
//forѭ��
	/*int a;
	for (a = 0; a < 10; a++);
	printf("%d\n", a); */
	//���� 
/*int main() {
    int sum = 0;
	int i=1;
	for (i=1; i <= 10; i++)
	{
	sum += i;
	}
	printf("%d\n", sum);
}*/

//while���
/*int main() {
int a=0;
int sum=0;
	while (a <=12) {
		a++;
		printf("%d\n", a);
	}
	printf("%d\n",a);
 }*/
	
	//����
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
	
//for��while��do while���Ի����滻��for�õĶࡣ
//dowhileѭ��
	/*int sum = 0;
	int i = 1;
	do {
		sum += i;
		i++;
	} while (i <= 10);
//	printf("%d\n", sum);*/
	//%��֪ʶ��
/*	��printfΪǰ��
	%dʮ���� %c�ַ�  �õ�����
	%s�ַ���  ��˫����
	%f ������fioat��double�ҵ�ͬ��%lf
		%xʮ������ %X %08x %08X
    ��scanfΪǰ��    %lf����double
     �����ַ    ����\n
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
//break��continue;
//	break����һ��ѭ��
 //   continue �÷�  ֱ������
 /*  int main() {
	int i=0;	
	int n=0;
	for (i = 0; i <= 7; i++) {
		if(i==5){			
	    continue;//����������
		}
    printf("%d\n", i);
	}

		for (n = 0; n <= 7; n++) {
			if (n == 5) {
				break;//ֱ������ȥ��ɶ������
			}
        printf("%d\n", n);

		}
		return 0;
 }*/ 


//�����  ���
/*int main() {
    int a;
	int b;
	int c;
	scanf_s ("%d", &a);
	scanf_s ("%d", &b);
	c =( a-b);
	
	printf ("%d\n", c);
}*/
	
//�������  ����������if
	/*int a = -1;
	printf("������ɼ���");
	scanf_s ("%d", &a);
	if (a >= 60) {
		printf("%d�ּ���\n", a);
	}
	if (a < 60) {
		printf("%d������\n", a);
	}*/
//switch�﷨   �����úö�ָ��
/*int main() {
      int a ;
	  scanf_s("%d", &a);
	  switch (a)
	  {
	  case 2334:
		  printf("����˧\n",a);
		  break;
	  case -100:
		  printf("�Ҳ�˧\n",a);
		  break;
	  }
}*/
      
//if�����ڸ��ӽṹ  if��switch���
//goto����ܲ��þͲ���  ��������ѭ��  �ɾ���ת
/*int main() {
int i = 0;
    step:
    printf("˧\n");
    i++;
	if(3==i){
		goto step1;
	}
    goto step;
	step1:
	printf("����\n");
}*/
    



	
	
#include<stdio.h>
#include<stdlib.h>

/*int main() {
    long long int a=1,b=1,c=1,i=1,j=1;
	for (i = 1; i <= i++; i++) {
		if (i < 3) {
	    printf("%d\n",c );
	    }
		if (i >= 3) {
			c = b + j;
			b = j;
			j = c;
			printf("%d\n", c);
	}
	}	
}*/
/*int main() {
	int i=0,a=1,b=1,c=1;
	for (i = 0; i <= i++; i++) {
		c = a + b;
		a = c;
		b = a;
		printf("%d\n", c);
	}
	}*/
/*int main() {
	printf("**        �������             **\n");
	printf("*          ��һ��              *\n");
	printf("*       �ô�ӡ�ɾ�ӡ           *\n");
	printf("*         ~�ڶ���~             *\n");
	printf("&         �����               &\n");
	printf("&          ����                &\n");
	printf("&           ˬ                 &\n");
	printf("&        ��Ҫ���˸�n           &\n");
	printf("\n\n\n\n");

	printf("   **        �������             **\n");
	printf("   *          ��һ��              *\n");
	printf("   *       �ô�ӡ�ɾ�ӡ           *\n");
	printf("   *         ~�ڶ���~             *\n");
	printf("   &         �����               &\n");
	printf("   &          ����                &\n");
	printf("   &           ˬ                 &\n");
	printf("   &        ��Ҫ���˸�n           &\n");

}*/
//��Ŀ1  �žų˷���
/*int main() {
	int i=0, j=0, result=0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			result = i * j;
			printf("%d*%d=%-3d", i, j, result);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}*/
//��Ŀ2  쳲���������  δ���
/*int main() {
	int m=1, n=1, i=1,k=0;
	for (i = 1; i <= 40; i++) {
		k = m + n;
		if (i < 1){
			printf("%d\n",1);
		}
		else
			m = n;
		    n = k;
			printf("%d\n", k);
	}
	system("pause");
	return 0;
}*/

/*int main() {
	int  i, m, n;
	m = n = 1;
	for (i = 1; i <=20; i++) {
		printf("%12ld,%12ld", m, n);
		if (i % 2 == 0)
			printf("\n");
		m = m + n;
		n = m + n;
	}
	system("pause");
}*/
//��Ŀ3 �ж�����  δ���
/*int main() {
	int m, i, k, h = 0,leap=1;
	printf("\n");
	for (m = 101; m <= 200; m++) {
		k = sqrt(m);
			for (i = 2; i <= k; i++) {
				if (m % i == 0) {
					leap = 0;
					break;
				}
				if (leap) {
					printf("%-4d", m);
					h++;
				}
				if (h % 10 == 0)
					printf("\n");
			
		}
            leap = 1;
	}
	printf("�ܹ��У�%d", h);
}*/
/*int main() {
	int m=0,j, i;
	for (i = 101; i <= 200; i++) {
		for (j = 2; j < i; j++) {
			if (i%j== 0){
				printf("%-3d,", i);
			    m++;
                }			
		}
	}
	printf("�������У�%d", m);
	}*/
/*int main() {
	int n;
	printf("������һ��1~100������\n");
	scanf_s("%d", &n);
	int m = 0;
	for (int i = 2; i <n; i++) {//�ж��ܷ�2~n-1����
		if (n % i == 0) {
			m++;
		}
	}
	    if (m == 0) {
		printf("%d������\n", n);
	}
	    else {
		printf("%d��������\n", n);
	}
	system("pause");
	return 0;
} *///�ɹ�
//��Ŀ4  ������
/*int main() {
	int m,i,sum=0;
	//scanf_s("%d\n", &m);
	for(m=1;m<=100;m++){
		for (i = 1; i < m; i++) {
			if (m % i == 0) {
				sum += i;
                printf("�������%d\n", sum);
				//printf("������%-3d", i);
			}
		}
    }
		
		/*if (m = sum) {
			printf("%d������\n", m);
		}
		else 
			printf("%d��������\n", m);	
		system("pause");
		return 0;
}*/
/*int main() {
	int i, j,sum=0;
	for (i = 1; i <= 1000; i++) {
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += i;
			}
			if (i == sum) {
				printf("�����ǣ�%d\n", sum);
			}
		}
	}
}*/
//������Ŀ  ������
/*int main() {
	int a;
	//scanf_s("%d\n", &a);
	int i;
	for(a=1;a<=100;a++){
	for (i = 2; i < a; i++) 
		
	
    if (a % i == 0)
			printf(",%d��������", a);
		else
			printf(",%d������", a);
   
	}
}*/
//��Ŀ5 ����
/*int main() {
	int a[4][4],b[4][4], i, j;
	printf("������16�����֣�");
		for(i=0;i<=3;i++)
			for (j = 0; j <= 3; j++) {
				scanf_s("%d", &a[i][j]);
				b[3 - j][i] = a[i][j];
			}
		printf("���£�");
			for (i = 0; i <= 3; i++)
				for (j = 0; j <= 3; j++) {
					printf("%6d", b[i][j]);

				}
					printf("\n");
}*/
//��Ŀ6 �������
/*int main() {
	int a[8][8]={0}, i, j;
	printf("%d\n", 1);
	malloc(1000);
	for (i = 1; i < 9; i++)//��		
		for(j=1;j<9;j++)//��
			if (j == 1) {
				a[i][j] = 1;
				printf("%-3d", a[i][j]);
			}
	if (i == j) {
		a[i][j] = 1;
		printf("%-3d\n", a[i][j]);
	}
	else
		a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
	printf("%-3d", a[i][j]);
	
	system("pause");
	return 0;
}*/
//쳲���������
/*int sum(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return sum(n - 1) + sum(n - 2);
}
int main(){
	int i;
	for (i = 1; i <= 15; i++) {
		printf("%d,", sum(i));
	}
	printf("\n");
}*/
//��������
/*int main() {
	int a[10][10] = {0};
	int i = 1, j = 1;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; i++) {
			if (i = 1) {
				a[1][i] = 1;
				int* p = a[1][i] ;
				printf("1");
			}
			if (i = j) 
				printf("1\n");
			
			else
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			printf("%-3d", a[i][j]);



		}
	}
}*/
//�������
/*#include <stdio.h>
int main(){
	int rows, coef = 1, space, i, j;
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);
	for (i = 0; i < rows; i++)//rows ��
	{
		for (space = 1; space <= rows - i; space++)
			printf("  ");   //��Ҫ�Ŀո��Ǵ�ӡ���������εĹؼ�
		for (j = 0; j <= i; j++)//һ���еĸ���
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;
			printf("%4d", coef);
		}
		printf("\n");
	}
	return 0;
}*/
//�Լ�����  ������
/*int main() {
	int i, j, flag = 1;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j <= i / 2; j++) {//
			if (i % j == 0) {
				flag = 0;
				break;
			}		

		}
        if (flag == 1) {
			   printf("%4d", i);
			}
		flag = 1;
	}
	return 0;
}*/
//������  ����֮��
/*#include<stdio.h>
int main() {
	int m, n, i, j, k, sum, index, flag = 0;
	int num[10000];
	scanf_s("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		index = 0;
		sum = 0;
		for (j = 1; j <= (i / 2); j++) {
			if (i % j == 0) {
				num[index++] = j;
				sum += j;
			}
		}
		if (sum == i) {
			flag = 1;
			printf("%d =", i);
			for (k = 0; k < index - 1; k++) {
				//�ֿ���ӡ���������ļӺźͿո�
				printf(" %d +", num[k]);
			}
			printf(" %d\n", num[k]);
		}
	}
	if (flag == 0) {
		printf("None\n");
	}
	return 0;
}*/
//������
//���100֮�ڵ���������
/*int main() {
	int i;
	int j;
	int flag = 1;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", i);
		}
		flag = 1;
	}
	return 0;
}*/
//������ת���


/*void Reverse(int* p, int size)
{
	int i, tmp;
	for (i = 0; i < size / 2; i++)
	{
		tmp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = tmp;
	}
}

int main(void)
{

	int i;
	int buffer[] = { 1,2,3,4,5,6,7 };
	Reverse(buffer, 7);
	for (i = 0; i < 7; i++)
	{
		printf("buffer[%d]:%d\n", i, buffer[i]);
	}
	while (1);
	getchar();
	return 0;
}*/
//��ά���� ��ÿ��ѧ��ƽ���ɼ���ÿ�ſε�ƽ���ɼ�

//�ַ����������
//���õݹ麯�����÷�ʽ��
//���������5���ַ������෴˳���ӡ������
/*int main()
{
	printf("������5���ַ�:\n");

	//��������
	void Reverse(int);
	int num = 5;

	//����ȡ������
	Reverse(num);
	return 0;
}*/

/*int main() {
	char a[]={0};
	char* p = &a[4];
	scanf_s("%c", &a);
	for (int i = 3; i >=0; i--) {
		printf("%-3c", p[i]);
	}

}*/
//����ȡ���ĺ���
//����5���ַ���Ȼ�������
//���ݹ飬�ȵݽ�����ع��һ�����̣�
/*void Reverse(int n) {
	char str;
	if (n == 1) {
		//����һ���ַ�
		scanf_s("%c", &str);

		//��ʼ����ع�
		printf("\n�෴˳��������:\n");
		//��������ַ�
		printf("%c", str);
	}
	else {
		scanf_s("%c", &str);
		//���еݽ�
		Reverse(n - 1);
		//�ع��ִ������
		printf("*");
		printf("%c", str);
	}
}*/

//����Ӵ�С

//����һ�������������У�������

//�����ַ���

//��������
/*int main() {
	int a,n,b;
	scanf_s("%d", &n);
	for (int i = 0;; i++) {
		a=n / 10;
		b= n % 10;
		n = a;//��ֵ
		if (a >= 1) {
			printf("%d\n", b);
		}
		else{
			printf("%d\n",b);
		    break;
		}
	}

}*/
//����ַ�
/*int main() {
	int n=1;
	while (n < 10) { n++; printf("����"); }
	int s;
	scanf_s("%c", &s);

	printf("%c", s);

	system("pause");
	return 0;
}*/


	






//1.����

/*int main() {
	char  a[100] = { "you are a baby" };
	char b[200]={0};

	printf("%s\n", strncpy(&b, &a, 1));//����ʽ�ǵ�Ҫ���
	printf("%s\n", memcpy(&b, &a, 5));
	printf("%s\n", strcpy(&b, &a));
	printf("%s\n", b);
	//strcmp �Ƚ��ַ�����С
}*/

/*int main() {
	int m = 0;
	m = atoi("178");//Ӣ���ַ��Ƿ� �����0
	printf("%d\n", m);
	char a[90] = { "you are a baby" };
	printf("%d", a);
}*/

/*% d �з���10��������
% i �з���10��������
% o �޷���8��������
% u �޷���10��������
% x �޷��ŵ�16�������֣�����Сдabcdef��ʾ
% X �޷��ŵ�16�������֣����Դ�дABCDEF��ʾ
% F / f ������
% E / e �ÿ�ѧ��ʾ��ʽ�ĸ�����
% gʹ�� % f�� % e��ʾ�е��ܵ�λ����ʾ��̵�����ʾ������ G ͬg��ʽ������ʾΪָ��
% c �����ַ�
% s �ַ���*/

/*int main() {
	int a=0;
	scanf_s("%d", a);
	printf("%x", a);
}*/

/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, a, b[100], c=0, d = 0,n;
	scanf_s("%d", &a);
	n = a;
	for (i = 0; i < a; i++)
		b[i] = i + 1;
	while (a == 1) {
		if (b[c] != 0) 
			d++;
		if (d == 3) {
			d = 0;
			b[c] = 0;
			a--;
		}
		c++;
		if (c == n) c = 0;
	}
	for (int y = 0; y < n; y++)
		if (b[y] != 0)
			printf("%d", b[y]);
	system("pause");
	return 0;
}*/

//#include<stdio.h>
//#include<stdlib.h>
//int fun(int y);
//int main() {
//	int cnt = 0, sum = 0,s=0,p=0,i=0;
//	for (i = 10; i <= 200; i++) {
//		if (fun(i) == 1) {
//			p = i;
//			while (i>0) {
//				s = i % 10;
//				sum += s;
//				i /= 10;
//			}		
//			if (sum == 4) {
//				cnt++;
//				printf("��%d�����ǣ�%d\n", cnt, p);
//				sum = 0;
//			}
//		}
//	}	

//}
//int fun(int y) {
//	int a = 0;
//	for (int i = 2; i < y/2; i++)
//		if (y % i == 0)
//			a++;	
//	if (a == 0)
//		return 1;
//	else {
//		a = 0;
//		return 0;
//	}
//}

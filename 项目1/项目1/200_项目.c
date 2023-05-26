//1.函数

/*int main() {
	char  a[100] = { "you are a baby" };
	char b[200]={0};

	printf("%s\n", strncpy(&b, &a, 1));//叠加式记得要清空
	printf("%s\n", memcpy(&b, &a, 5));
	printf("%s\n", strcpy(&b, &a));
	printf("%s\n", b);
	//strcmp 比较字符串大小
}*/

/*int main() {
	int m = 0;
	m = atoi("178");//英文字符非法 会输出0
	printf("%d\n", m);
	char a[90] = { "you are a baby" };
	printf("%d", a);
}*/

/*% d 有符号10进制整数
% i 有符号10进制整数
% o 无符号8进制整数
% u 无符号10进制整数
% x 无符号的16进制数字，并以小写abcdef表示
% X 无符号的16进制数字，并以大写ABCDEF表示
% F / f 浮点数
% E / e 用科学表示格式的浮点数
% g使用 % f和 % e表示中的总的位数表示最短的来表示浮点数 G 同g格式，但表示为指数
% c 单个字符
% s 字符串*/

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
//				printf("第%d个数是：%d\n", cnt, p);
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

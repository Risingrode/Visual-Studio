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
	printf("**        画面控制             **\n");
	printf("*          第一步              *\n");
	printf("*       用打印可劲印           *\n");
	printf("*         ~第二步~             *\n");
	printf("&         就这吧               &\n");
	printf("&          哈哈                &\n");
	printf("&           爽                 &\n");
	printf("&        不要忘了杠n           &\n");
	printf("\n\n\n\n");

	printf("   **        画面控制             **\n");
	printf("   *          第一步              *\n");
	printf("   *       用打印可劲印           *\n");
	printf("   *         ~第二步~             *\n");
	printf("   &         就这吧               &\n");
	printf("   &          哈哈                &\n");
	printf("   &           爽                 &\n");
	printf("   &        不要忘了杠n           &\n");

}*/
//项目1  九九乘法表
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
//项目2  斐波那契数列  未完成
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
//项目3 判断素数  未完成
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
	printf("总共有：%d", h);
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
	printf("素数共有：%d", m);
	}*/
/*int main() {
	int n;
	printf("请输入一个1~100的数：\n");
	scanf_s("%d", &n);
	int m = 0;
	for (int i = 2; i <n; i++) {//判断能否被2~n-1整除
		if (n % i == 0) {
			m++;
		}
	}
	    if (m == 0) {
		printf("%d是素数\n", n);
	}
	    else {
		printf("%d不是素数\n", n);
	}
	system("pause");
	return 0;
} *///成功
//项目4  找完数
/*int main() {
	int m,i,sum=0;
	//scanf_s("%d\n", &m);
	for(m=1;m<=100;m++){
		for (i = 1; i < m; i++) {
			if (m % i == 0) {
				sum += i;
                printf("这个数是%d\n", sum);
				//printf("因数是%-3d", i);
			}
		}
    }
		
		/*if (m = sum) {
			printf("%d是完数\n", m);
		}
		else 
			printf("%d不是完数\n", m);	
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
				printf("完数是：%d\n", sum);
			}
		}
	}
}*/
//附加项目  找质数
/*int main() {
	int a;
	//scanf_s("%d\n", &a);
	int i;
	for(a=1;a<=100;a++){
	for (i = 2; i < a; i++) 
		
	
    if (a % i == 0)
			printf(",%d不是质数", a);
		else
			printf(",%d是质数", a);
   
	}
}*/
//项目5 数组
/*int main() {
	int a[4][4],b[4][4], i, j;
	printf("请输入16个数字：");
		for(i=0;i<=3;i++)
			for (j = 0; j <= 3; j++) {
				scanf_s("%d", &a[i][j]);
				b[3 - j][i] = a[i][j];
			}
		printf("如下：");
			for (i = 0; i <= 3; i++)
				for (j = 0; j <= 3; j++) {
					printf("%6d", b[i][j]);

				}
					printf("\n");
}*/
//项目6 杨辉三角
/*int main() {
	int a[8][8]={0}, i, j;
	printf("%d\n", 1);
	malloc(1000);
	for (i = 1; i < 9; i++)//行		
		for(j=1;j<9;j++)//列
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
//斐波那契数列
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
//数组排列
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
//杨辉三角
/*#include <stdio.h>
int main(){
	int rows, coef = 1, space, i, j;
	printf("Enter number of rows: ");
	scanf_s("%d", &rows);
	for (i = 0; i < rows; i++)//rows 行
	{
		for (space = 1; space <= rows - i; space++)
			printf("  ");   //必要的空格是打印等腰三角形的关键
		for (j = 0; j <= i; j++)//一行中的个数
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
//自己测试  找素数
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
//找完数  因数之和
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
				//分开打印，避免后面的加号和空格
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
//找素数
//输出100之内的所有素数
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
//数组旋转输出


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
//二维数组 求每个学生平均成绩和每门课的平均成绩

//字符串反向输出
//利用递归函数调用方式，
//将所输入的5个字符，以相反顺序打印出来。
/*int main()
{
	printf("请输入5个字符:\n");

	//申明函数
	void Reverse(int);
	int num = 5;

	//调用取反函数
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
//定义取反的函数
//输入5个字符，然后反向输出
//理解递归，先递进，后回归的一个过程；
/*void Reverse(int n) {
	char str;
	if (n == 1) {
		//输入一个字符
		scanf_s("%c", &str);

		//开始反向回归
		printf("\n相反顺序输出结果:\n");
		//输出单个字符
		printf("%c", str);
	}
	else {
		scanf_s("%c", &str);
		//进行递进
		Reverse(n - 1);
		//回归后执行如下
		printf("*");
		printf("%c", str);
	}
}*/

//排序从大到小

//输入一个数插入数组中，并排序

//回文字符串

//回文数字
/*int main() {
	int a,n,b;
	scanf_s("%d", &n);
	for (int i = 0;; i++) {
		a=n / 10;
		b= n % 10;
		n = a;//赋值
		if (a >= 1) {
			printf("%d\n", b);
		}
		else{
			printf("%d\n",b);
		    break;
		}
	}

}*/
//输出字符
/*int main() {
	int n=1;
	while (n < 10) { n++; printf("厉害"); }
	int s;
	scanf_s("%c", &s);

	printf("%c", s);

	system("pause");
	return 0;
}*/


	






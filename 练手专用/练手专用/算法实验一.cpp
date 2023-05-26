
/*
实验目的：
1.运用合适的编程环境，编写实现求最大公约数及方程求根相关算法，培养学生程序调试能力、
算法设计与分析的能力。
2.运用合适的编程环境，编写实现求最大公约数的欧几里得算法及长除算法、一元二次方程求
根及一般的一元三次方程在给定区间里的根，培养学生创新和自学等能力。

实验主要内容：
1. 分析求最大公约数问题及方程求根问题要用到的函数。
2. 主要实现求最大公约数函数，求方程根的函数
实验成果要求：及时提交实验报告。

*/



//gcd

/*
#include<iostream>
#include<algorithm>
using namespace std;

int gcd2(int x, int y) {
	return y ?  gcd2(y, x % y):x;
}

void gcd3(int x, int y) {
	int ans = 0;
	for (int i = y; i >= 1; i--) {
		if (x % i == 0 && y % i == 0) {
			ans = i;
			break;
		}
	}

	cout << "暴力求解的结果是" << ans << endl;

	return;
}

int main() {
	int n, m;
	cout << "请输入2个数字：";
	cin >> n >> m;
	cout<<"辗转相除法的结果是：" << gcd2(max(n, m), min(n, m)) << endl;
	gcd3(max(n, m), min(n, m));

	return 0;
}*/



/*
#include<iostream>
#include <cmath>

using namespace std;

void test(double a, double b, double c, double& x1, double& x2) {
	double d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
	}
	else {
		// 无解
		x1 = NULL;
		x2 = NULL;
	}
}


int main() {
	double a, b, c, x1, x2;
	cout << "请输入系数：";
	cin >> a >> b >> c;
	test(a, b, c, x1, x2);
	cout << "解分别是：" << x1 << "和" << x2 << endl;
	return 0;
}
*/


/*
#include<iostream>
#include <cmath>

using namespace std;

double f(double x, double a, double b, double c, double d) {
	return a * x * x * x + b * x * x + c * x + d;
}

double test(double a, double b, double c, double d, double x0, double x1) {
	double f0 = f(x0, a, b, c, d);
	double f1 = f(x1, a, b, c, d);
	if (f0 * f1 > 0) {
		//无解
		return NULL;
	}
	double x;
	do {
		x = (x0 + x1) / 2;
		double fx = f(x, a, b, c, d);
		if (fx * f0 < 0) {
			x1 = x;
			f1 = fx;
		}
		else {
			x0 = x;
			f0 = fx;
		}
	} while (fabs(f0 - f1) > 1e-6);
	return x;
}



int main() {
	double a, b, c, x1, x2;
	cout << "请输入系数：";
	cin >> a >> b >> c;
	test(a, b, c, x1, x2);

	cout << "解分别是：" << x1 << "和" << x2 << endl;
	return 0;
}
*/


/*
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	double a, b, c, d;
	cout << "请输入四个系数:" << endl;
	cin >> a >> b >> c >> d;
	for (double i = -100; i <= 100; i += 0.001) {
		double k = i + 0.001;
		double s1 = a * i * i * i + b * i * i + c * i + d;
		double s2 = a * k * k * k + b * k * k + c * k + d;
		if (s1 >= 0 && s2 <= 0 || s1 <= 0 && s2 >= 0) {
			double x = (i + k) / 2;
			cout << "结果是：";
			cout << fixed << setprecision(2) << x << " ";
		}
	}
	return 0;
}
*/




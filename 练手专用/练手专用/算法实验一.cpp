
/*
ʵ��Ŀ�ģ�
1.���ú��ʵı�̻�������дʵ�������Լ���������������㷨������ѧ���������������
�㷨����������������
2.���ú��ʵı�̻�������дʵ�������Լ����ŷ������㷨�������㷨��һԪ���η�����
����һ���һԪ���η����ڸ���������ĸ�������ѧ�����º���ѧ��������

ʵ����Ҫ���ݣ�
1. ���������Լ�����⼰�����������Ҫ�õ��ĺ�����
2. ��Ҫʵ�������Լ���������󷽳̸��ĺ���
ʵ��ɹ�Ҫ�󣺼�ʱ�ύʵ�鱨�档

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

	cout << "�������Ľ����" << ans << endl;

	return;
}

int main() {
	int n, m;
	cout << "������2�����֣�";
	cin >> n >> m;
	cout<<"շת������Ľ���ǣ�" << gcd2(max(n, m), min(n, m)) << endl;
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
		// �޽�
		x1 = NULL;
		x2 = NULL;
	}
}


int main() {
	double a, b, c, x1, x2;
	cout << "������ϵ����";
	cin >> a >> b >> c;
	test(a, b, c, x1, x2);
	cout << "��ֱ��ǣ�" << x1 << "��" << x2 << endl;
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
		//�޽�
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
	cout << "������ϵ����";
	cin >> a >> b >> c;
	test(a, b, c, x1, x2);

	cout << "��ֱ��ǣ�" << x1 << "��" << x2 << endl;
	return 0;
}
*/


/*
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	double a, b, c, d;
	cout << "�������ĸ�ϵ��:" << endl;
	cin >> a >> b >> c >> d;
	for (double i = -100; i <= 100; i += 0.001) {
		double k = i + 0.001;
		double s1 = a * i * i * i + b * i * i + c * i + d;
		double s2 = a * k * k * k + b * k * k + c * k + d;
		if (s1 >= 0 && s2 <= 0 || s1 <= 0 && s2 >= 0) {
			double x = (i + k) / 2;
			cout << "����ǣ�";
			cout << fixed << setprecision(2) << x << " ";
		}
	}
	return 0;
}
*/




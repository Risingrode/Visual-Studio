/*
#define _CRT_SECURE_NO_WARNINGS
//注意：这个警示代码要加到第一行
#include<iostream>
#include<fstream>
#include <stdlib.h>
#include<string>
#include<vector>
#include<ctime>
//#include<Winuser.h>
#include<time.h>
#include<windows.h>
#include<cstdio>
#include<conio.h>


using namespace std;

void down(char a)
{
	keybd_event(a, (BYTE)0, 0, 0);//点击输入a
	keybd_event(a, (BYTE)0, KEYEVENTF_KEYUP, 0);//抬起
}


void enter()
{
	keybd_event(VK_RETURN, 0, 0, 0);
	keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
}


/*
int main()
{
	char we[25][25] = {
				   "######################",
				   "#                    #",
				   "# 欢迎使用密码破解器 #",
				   "#	             #",
				   "######################",
	};

	for (int i = 0; i < 5; i++)
		puts(we[i]);

	cout << "请将鼠标点击至密码输入栏" << endl;

	Sleep(3000);

	cout << "破译开始!" << endl;

	char pwd[9];
	char RwN[58] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char tmp[32];
	int n = 36;
	for (int p1 = 0; p1 < n; p1++) {
		for (int p2 = 0; p2 < n; p2++) {
			for (int p3 = 0; p3 < n; p3++) {
				for (int p4 = 0; p4 < n; p4++) {
					for (int p5 = 0; p5 < n; p5++) {
						for (int p6 = 0; p6 < n; p6++) {
							for (int p7 = 0; p7 < n; p7++) {
								for (int p8 = 0; p8 < n; p8++)
								{
									tmp[0] = RwN[p1];
									tmp[1] = RwN[p2];
									tmp[2] = RwN[p3];
									tmp[3] = RwN[p4];
									tmp[4] = RwN[p5];
									tmp[5] = RwN[p6];
									tmp[6] = RwN[p7];
									tmp[7] = RwN[p8];
									for (int mm = 0; mm < 9; mm++)
										down(tmp[mm]);
									Sleep(2);
									enter();
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}*/

/*
void test() {
	string s;
	cin >> s;

	for (int i = 5; i >= 0; i--) {
		cout << "倒计时：" << i << "秒" << endl;
		Sleep(1000);
	}

	for (int i = 0; i < s.size(); i++) {
		down(s[i]);
	}
}


int main() {
	//test();

	char we[25][25] = {
			   "######################",
			   "#                    #",
			   "# 欢迎使用密码破解器 #",
			   "#	             #",
			   "######################",
	};

	for (int i = 0; i < 5; i++)
		puts(we[i]);//输出一行

	for (int i = 5; i >= 0; i--) {
		cout << "倒计时：" << i << "秒" << endl;
		Sleep(1000);
	}

	cout << "破译开始!" << endl;



	ifstream in("密码列表.txt");
    char p[256];
    srand((unsigned int) time(NULL));

    vector<string>res;
    int count = 0;
    while (!in.eof())
    {
        in.getline(p, 20);
        res.push_back(p);
    }
    in.close();

    ofstream out("out.txt");

  

    for (int l = 0; l < 2048; l++) {

        out << res[rand()%2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " "
            << res[rand() % 2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " " <<
            res[rand() % 2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " " << res[rand() % 2048] << " " << endl;

    }
    cout << "写入成功！" << endl;

    out.close();
	

	char p[256];
	ifstream pn("out.txt");
	int coun = 0;
	for (int i = 0; i < 2048; i++) {

		pn.getline(p, 100);

		for (int j = 0; j <50; j++) {
			
			down(p[j]);
		}
		system("pause");
		//enter();
	}
    return 0;
}
*/










/*
#include<iostream>
#include<math.h>
using namespace std;

int main() {

	long long a, b;
	cin >> a >> b;
	if (b > 0)
		cout << abs(a) << endl;
	else
		cout << -abs(a) << endl;


	return 0;
}*/

/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	int len = max(n, m);
	vector<int>ans(len+1);
	vector<int>v(len);
	vector<int>v1(len);
	for (int i = len - n; i <len; i++)cin >> v[i];
	for (int i = len - m; i< len; i++)cin >> v1[i];
	int flag = 0, p = 0,s=0;
	for (int i = len-1; i >=0; i--) {
		p = v[i] + v1[i] + flag;
		s = len-i+1;
		flag = p/s;
		p %= s;
		ans[i] = p;
	}

	if (flag) {
		cout << flag << " ";
		for (int i = 0; i < len; i++)
			cout << ans[i] << " ";
	}
	else
		for (int i = 0; i < len; i++)
			cout << ans[i]<<" ";

	return 0;
}
*/




//
//#include <iostream>
//using namespace std;
//
//int main() {
//	double a, b, c, d;
//	cout << "请输入四个系数:" << endl;
//	cin >> a >> b >> c >> d;
//
//	for (double i = -100; i <= 100; i += 0.001) {
//		double k = i + 0.001;
//		// cout << k << endl;
//		double s1 = a * i * i * i + b * i * i + c * i + d;
//		double s2 = a * k * k * k + b * k * k + c * k + d;
//		if (s1 *s2<=0 ) {
//			double x = (i + k) / 2;
//			cout << "结果是：";
//			cout <<  x << " ";
//		}
//	}
//
//	return 0;
//}














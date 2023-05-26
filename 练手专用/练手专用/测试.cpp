

/*#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		int t = 0,a=0,b=0;
		if (m % 3 == 1) {
			t += (m / 3);
			if (m % 2 == 1) {
				t = min( t + 2, m / 2 + 2 );
			}
			else {
				t = min( t + 2, m / 2);
			}
		}
		else {
			t = (m + 1) / 3;
		}
		cout << t << endl;
	}
	return 0;
}*/

//4A
/*
#include<iostream>
using namespace std;
int main() {
	int m;
	cin >> m;

	
	if (m % 2) {
			cout << "NO" << endl;
	}
	else {
		if (m == 2)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

	}
	return 0;
}*/


//71A
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string p,target;
		cin>> p;
		if (p.size() <= 10)
			cout << p << endl;
		else {
			string a = to_string(p.size() - 2);
			cout << p[0] + a + p[p.size() - 1] << endl;
		}
	}

	
	return 0;
}
*/

//
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int m,target=0;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			target += 1;
	}
	cout << target << endl;
	return 0;
}*/





/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	long long  n, m, a;
	long long t = 0;
	cin >> n >> m >> a;
	long long l = (n % a) ? (n / a) + 1 : (n / a);
	long long w = (m % a) ? (m / a) + 1 : (m / a);
	t = l * w;
	cout << t<<endl;
	return 0;
}*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,k,r,a,p;
	cin >> n >> k;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	r = v[n - k];
	for (int i = n - k; i < n; i++) {
		if (v[i] != r) {
			p = i;
			break;
		}

	}
	cout << p << endl;

	return 0;
}

*/

/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m,a;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		vector<int>p(a);
		for (int j = 0; j < a; j++)
			cin >> p[j];
		vector<int>r(a);

		r[0] = p[0];
		int flag = 0;
		for (int j = 1; j < a; j++) {
			int m = j - 1;
			if (r[m]&&p[j]&&(r[m] + p[j] >= 0) && (r[m] - p[j] >= 0)) {
				flag = 1;
					break;
			}
			r[j] = r[m] + p[j];
		}
		if (flag)
			cout << -flag;
		else
			for (int i=0;i<a;i++)
				cout << r[i] << " ";
		cout << endl;
	}
	return 0;
}

*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vector<int>p(b),r(b);
		
		for (int k = 0; k < b; k++)
			cin >> p[k];
		for (int j = b - 1; j > 0; j--) {
			int s = j - 1;
			r[j] = p[j] - p[s];
		}
		r[0] = p[0];
		int flag = 0;
		for (int k = 0; k < b-1; k++)
			if (r[k] > r[k + 1])
				flag = 1;
		if (flag)cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
}
//*/
//#include<iostream>
//using namespace std;
//#define MAX_SIZE 101
//typedef int ele;
////三元组节点 结构体
//typedef struct {
//	int row;//行下标
//	int col;//列下标
//	ele val;//元素
//}Triple;
////三元组顺序表
//typedef struct {
//	int rn;//行数
//	int cn;//列数
//	int tn;//非0元素个数
//	Triple data[MAX_SIZE];//节点库
//}TMatrix;
//
//int main() {
//	TMatrix mat;
//	mat.tn = 9;
//	mat.rn = 6;
//	mat.cn = 7;
//	for (int i = 0; i < mat.tn; i++) {
//		cin>> mat.data[i].val >> mat.data[i].col >> mat.data[i].row ;
//	}
//	return 0;
//}

/*
12 1 2
9 1 3
-3 3 1
4 3 8
24 4 3
2 4 6
18 5 2
-7 6 7
-6 7 4
*/

/*

typedef struct Clone {
	int row, col;
	ele val;
	struct Clone* down, * right;//指向下面跟右边节点
}OLNode;

typedef struct Clnode {
	int rn, cn, tn;//行,列，非0数
	OLNode* rhead;
	OLNode* chead;
}CrossList;

*/




/*
#include <iostream>
#include <cmath>

using namespace std;

#define inf 10000000.0
struct Point
{
	int x, y;
};

// 计算两点之间的距离
float dist(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

// 查找最近点对
void closestPair(Point points[], int n)
{
	float min_dist = inf;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			float d = dist(points[i], points[j]);
			if (d < min_dist)
			{
				min_dist = d;
			}
		}
	}
	cout << "最近点对的距离为：" << min_dist << endl;
}

int main() {
	int n;
	cout << "请输入点的数量：";
	cin >> n;
	Point *P=new Point[n];
	cout << "请输入所有点的坐标(x, y)：" << endl;
	for (int i = 0; i < n; i++) {
		cin >> P[i].x >> P[i].y;
	}
	
	closestPair(P, n);
	delete[]P;
	return 0;
}
*/


/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point {
	double x, y;
};

bool cmpX(Point a, Point b) {
	return a.x < b.x;
}

bool cmpY(Point a, Point b) {
	return a.y < b.y;
}

double dist(Point a, Point b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double minDist(Point P[], int n) {
	if (n <= 1) return 0.0;
	if (n == 2) return dist(P[0], P[1]);
	int mid = n / 2;
	double midx = P[mid].x;
	//
	double d = min(minDist(P, mid), minDist(P + mid, n - mid));
	Point strip[n];
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (abs(P[i].x - midx) < d) {
			strip[j++] = P[i];
		}
	}
	sort(strip, strip + j, cmpY);
	for (int i = 0; i < j; i++) {
		for (int k = i + 1; k < j && strip[k].y - strip[i].y < d; k++) {
			d = min(d, dist(strip[i], strip[k]));
		}
	}
	return d;
}

int main() {
	int n;
	cout << "请输入点的数量：";
	cin >> n;
	Point P[n];
	cout << "请输入所有点的坐标(x, y)：" << endl;
	for (int i = 0; i < n; i++) {
		cin >> P[i].x >> P[i].y;
	}
	sort(P, P + n, cmpX);
	cout << "最近点对距离为：" << minDist(P, n) << endl;
	return 0;
}
*/


/*
#include <iostream>
#include <vector>
using namespace std;

struct Point {
	int x, y;
};

// 判断向量AB和向量AC的叉积是否大于0  大于0表示逆时针  
bool crossProduct(Point a, Point b, Point c) {
	return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x) > 0;
}
bool Find(vector<Point>p, Point t) {
	for (auto& e : p)
		if (e.x == t.x&& e.y==t.y)
			return true;
	return false;
}
// 暴力枚举计算凸包
vector<Point> bruteForceConvexHull(vector<Point>& points) {
	int n = points.size();
	vector<Point> hull;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {//这两个循环纯纯暴力，挨个比较

			if (i == j) continue;	//自己遇见自己，直接跳过
			bool flag = true;		//标记

			for (int k = 0; k < n; k++) {//这个循环是检测i j 两个点是不是都在最外面
				if (k == i || k == j) continue;
				//如果i j k 小于0 表明j i点必定不是凸包 因为i j k 是顺时针方向 j点
				if (!crossProduct(points[i], points[j], points[k])) {
					flag = false;
					break;
				}
			}

			if (flag) {
				//看看i 和j 点谁不在hull中 不在的话添加进去
			
				if (!Find(hull,points[i])) {
					hull.push_back(points[i]);
				}
				if (!Find(hull, points[j])) {
					hull.push_back(points[j]);
				}
			}

		}
	}
	return hull;
}

int main() {
	
	vector<Point> points = { {0, 0}, {1, 1}, {2, 2}, {2, 0}, {0, 2}, {1, 0}, {0, 1}, {2, 1}, {1, 2} };
	vector<Point> hull = bruteForceConvexHull(points);

	for (int i = 0; i < hull.size(); i++) {
		cout << "(" << hull[i].x << ", " << hull[i].y << ")" << endl;
	}
	return 0;
}*/


//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cmath>
//
//#define x first
//#define y second
//using namespace std;
//typedef pair<double, double> pdd;
//const int N = 10010;
//pdd q[N];
//int n;
//int stack[N];
//bool used[N];
//
//pdd operator-(pdd a, pdd b) {
//	return { a.x - b.x,a.y - b.y };
//}
//
//double get_dist(pdd a, pdd b) {
//	double dx = a.x - b.x;
//	double dy = a.y - b.y;
//	return sqrt(dx * dx + dy * dy);
//}
//double cross(pdd a, pdd b) {
//	return a.x * b.y - b.x * a.y;
//}
//double area(pdd a, pdd b, pdd c) {
//	return cross(b - a, c - a);
//}
//double Andrew() {
//	sort(q, q + n);
//	int top = 0;
//	for (int i = 0; i < n; ++i) {
//		while (top >= 2 && area(q[stack[top - 1]], q[stack[top]], q[i]) <= 0) {
//			if (area(q[stack[top - 1]], q[stack[top]], q[i]) < 0)
//				used[stack[top--]] = false;
//			else top--;
//		}
//		stack[++top] = i;
//		used[i] = true;
//	}
//	used[0] = false;
//	for (int i = n - 1; i >= 0; --i) {
//		if (used[i]) continue;
//		while (top >= 2 && area(q[stack[top - 1]], q[stack[top]], q[i]) <= 0)
//			used[stack[top--]] = false;
//		stack[++top] = i;
//	}
//	double res = 0;
//	for (int i = 2; i <= top; ++i) {
//		res += get_dist(q[stack[i - 1]], q[stack[i]]);
//	}
//	return res;
//}
//int main() {
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; ++i)
//		scanf_s("%lf%lf", &q[i].x, &q[i].y);
//	double ans = Andrew();
//	printf("%.2lf", ans);
//	return 0;
//}






/*
#include<iostream>
using namespace std;

int gcd(int a, int b) {
	return b?gcd(b, a % b) : a;
}

int main() {
	cout << "请输入分子分母";
	int a, b,a1,b1;
	cin >> a >> b;
	a1 = a / gcd(a, b);
	b1 = b / gcd(a, b);
	cout << "结果是：" << a1 << "/" << b1 << endl;
	return 0;
}
*/


//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// 求解目标函数的值
//int objectiveFunction(int x, int y)
//{
//	return 3 * x + 5 * y;
//}
//
//// 判断是否满足约束条件
//bool satisfyConstraint(int x, int y)
//{
//	if (x + y <= 4 && x + 3 * y <= 6 && x >= 0 && y >= 0) {
//		return true;
//	}
//	return false;
//}
//
//// 蛮力枚举所有可能的解
//void solveLP()
//{
//	int maxObj = 0;
//	int maxX = 0, maxY = 0;
//
//	for (int x = 0; x <= 4; ++x) {
//		for (int y = 0; y <= 2; ++y) {
//			if (satisfyConstraint(x, y)) {
//				int obj = objectiveFunction(x, y);
//				if (obj > maxObj) {
//					maxObj = obj;
//					maxX = x;
//					maxY = y;
//				}
//			}
//		}
//	}
//
//	cout << "目标函数取得极大值：" << maxObj << endl;
//	cout << "当 x = " << maxX << "，y = " << maxY << " 时取得最优解。" << endl;
//}
//
//int main()
//{
//	solveLP();
//
//	return 0;
//}



/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isOk(string s, string t) {
	if (s.length() != t.length()) {
		return false;
	}
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	return s == t;
}

int main() {
	 string s1, s2;
	 cout << "请输入两个单词：";
	 cin >> s1 >> s2;
	if (isOk(s1, s2)) 
		 cout << s1 << " 和 " << s2 << " 是变位词" <<  endl;
	else 
		 cout << s1 << " 和 " << s2 << " 不是变位词" <<  endl;
	return 0;
}
*/


//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	double total = 7.11;
//	double prices[4];
//	for (int i = 1; i < 711; i++) {
//		for (int j = i; j < 711; j++) {
//			for (int k = j; k < 711; k++) {
//				int l = round(total * 100) - i * j * k;
//				if (l > 0 && l < 711 && i + j + k + l == 711) {
//					prices[0] = i / 100.0;
//					prices[1] = j / 100.0;
//					prices[2] = k / 100.0;
//					prices[3] = l / 100.0;
//					 cout << "这个物品的价格是: ";
//					for (int m = 0; m < 4; m++) {
//						 cout << "$" << prices[m] << " ";
//					}
//					cout <<  endl;
//					return 0;
//				}
//			}
//		}
//	}
//
//	cout << "没有结果" <<  endl;
//	return 0;
//}




/*
#include<iostream>
using namespace std;
bool check(int x, int y, int i, int j, int k)
{
	int a[10] = { 0 };
	int n = 0;
	a[x / 10] += 1;
	a[x % 10] += 1;
	a[y] += 1;
	a[i % 10] += 1;
	a[i / 10 % 10] += 1;
	a[i / 100] += 1;
	a[j] += 1;
	a[k / 10] += 1;
	a[k % 10] += 1;
	if (a[0] == 0) {
		for (int i = 1; i < 10; i++)
		{
			if (a[i] == 1)
				n++;
		}
		if (n == 9)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main()
{
	float x, y, i, j, k, z;
	for (x = 12; x <= 98; x++)
		for (y = 2; y <= 9; y++)
			for (i = 123; i < 987; i++)
				for (j = 2; j <= 9; j++)
					for (k = 12; k < 98; k++)
					{
						z = x * y + i / j - k;
						if (z == 0 && check(x, y, i, j, k))
							cout << x << "*" << y << "+" << i << "/" << j << "-" << k << "=" << 0 << endl;
					}
			
	return 0;
}

*/






/*

//数字旋转方阵
#include <iostream>
#include <vector>

using namespace std;

//函数声明
void createSpiralMatrix(int n);

int main()
{
	int n;
	cout << "请输入一个正整数n:";
	cin >> n;

	createSpiralMatrix(n);

	return 0;
}

//函数定义
void createSpiralMatrix(int n)
{
	vector<vector<int>> matrix(n, vector<int>(n, 0)); //创建一个n*n的二维矩阵，并初始化为0
	int value = 1; //从1开始填充矩阵
	int rowStart = 0; //矩阵行的起始位置
	int rowEnd = n - 1; //矩阵行的终止位置
	int colStart = 0; //矩阵列的起始位置
	int colEnd = n - 1; //矩阵列的终止位置

	while (rowStart <= rowEnd && colStart <= colEnd)
	{
		//从左到右填充矩阵的第一行
		for (int i = colStart; i <= colEnd; i++)
		{
			matrix[rowStart][i] = value++;
		}
		rowStart++;

		//从上到下填充矩阵的最后一列
		for (int i = rowStart; i <= rowEnd; i++)
		{
			matrix[i][colEnd] = value++;
		}
		colEnd--;

		//从右到左填充矩阵的最后一行
		for (int i = colEnd; i >= colStart; i--)
		{
			matrix[rowEnd][i] = value++;
		}
		rowEnd--;

		//从下到上填充矩阵的第一列
		for (int i = rowEnd; i >= rowStart; i--)
		{
			matrix[i][colStart] = value++;
		}
		colStart++;
	}

	//输出矩阵
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}


*/





/*
#include <iostream>
#include <iomanip>

using namespace std;

int Data[100][100];

void Full(int number, int begin, int size)
{             //从number 开始填写size 阶方阵，左上角的下标为(begin, begin)
	int i, j, k;
	if (size == 0)             //递归的边界条件，如果size等于0，则无须填写
		return;
	if (size == 1)                         //递归的边界条件，如果size等于1
	{
		Data[begin][begin] = number;         //则只须填写number
		return;
	}
	i = begin; j = begin;                   //初始化左上角下标
	for (k = 0; k < size - 1; k++)            //填写区域A，共填写size - 1个数
	{
		Data[i][j] = number;                 //在当前位置填写number
		number++; i++;                    //行下标加1
	}
	for (k = 0; k < size - 1; k++)            //填写区域B，共填写size - 1个数
	{
		Data[i][j] = number;                 //在当前位置填写number
		number++; j++;                    //列下标加1
	}
	for (k = 0; k < size - 1; k++)            //填写区域C，共填写size - 1个数
	{
		Data[i][j] = number;                //在当前位置填写number
		number++; i--;                    //行下标减1
	}
	for (k = 0; k < size - 1; k++)            //填写区域D，共填写size - 1个数
	{
		Data[i][j] = number;                //在当前位置填写number
		number++; j--;                    //列下标减1
	}
	Full(number, begin + 1, size - 2);       //递归求解，左上角下标为begin + 1
}

int main()
{
	int Size;
	cout << "输入方阵的大小：";
	cin >> Size;
	Full(1, 0, Size);
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
			cout << Data[i][j] << setw(4);
		cout << endl;
	}
	cout << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//函数声明
void chessboardCover(int tr, int tc, int dr, int dc, int size, vector<vector<int>>& board);

//全局变量
int tile = 1; //用于记录当前使用的骨牌号码

int main()
{
	int k; //棋盘大小为2^k
	int tr, tc; //特殊方格的行列号
	cout << "请输入k和特殊方格的行列号：";
	cin >> k >> tr >> tc;

	int size = pow(2, k); //计算棋盘大小
	vector<vector<int>> board(size, vector<int>(size, 0)); //创建一个初始值为0的棋盘

	board[tr][tc] = -1; //将特殊方格标记为-1

	chessboardCover(0, 0, tr, tc, size, board); //开始棋盘覆盖

	//输出棋盘
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << board[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}

//函数定义
void chessboardCover(int tr, int tc, int dr, int dc, int size, vector<vector<int>>& board)
{
	if (size == 1) //棋盘大小为1时，不需要覆盖
	{
		return;
	}

	int t = tile++; //记录当前使用的骨牌号码
	int s = size / 2; //将棋盘分成四个大小相等的子棋盘

	//覆盖左上子棋盘
	if (dr < tr + s && dc < tc + s)
	{
		chessboardCover(tr, tc, dr, dc, s, board);
	}
	else
	{
		board[tr + s - 1][tc + s - 1] = t;
		chessboardCover(tr, tc, tr + s - 1, tc + s - 1, s, board);
	}

	//覆盖右上子棋盘
	if (dr < tr + s && dc >= tc + s)
	{
		chessboardCover(tr, tc + s, dr, dc, s, board);
	}
	else
	{
		board[tr + s - 1][tc + s] = t;
		chessboardCover(tr, tc + s, tr + s - 1, tc + s, s, board);
	}

	//覆盖左下子棋盘
	if (dr >= tr + s && dc < tc + s)
	{
		chessboardCover(tr + s, tc, dr, dc, s, board);
	}
	else
	{
		board[tr + s][tc + s - 1] = t;
		chessboardCover(tr + s, tc, tr + s, tc + s - 1, s, board);
	}

	//覆盖右下子棋盘
	if (dr >= tr + s && dc >= tc + s) {
		chessboardCover(tr + s, tc + s, dr, dc, s, board); // 右下
	}
	else {
		board[tr + s][tc + s] = t; // 不在右下，则覆盖此格
		chessboardCover(tr + s, tc + s, tr + s, tc + s, s, board); // 右下
	}
}

*/

/*
#pragma warning(disable:4996);//注意：这行代码在vs软件上加上，否则会报错
#include <iostream>
#include <stdio.h>
#include <string>

#define Max 0x3fffffff
#define MaxSize 20
using namespace std;
int map[MaxSize][MaxSize];

struct Proc
{
	double dist;
	string  way;
};

int main()
{
	char* temp=NULL;
	int from, count, n = 10, i, j;//n表示点的数目
	bool flag[MaxSize];
	while (true)
	{
		memset(flag, false, sizeof(flag));
		cout << "请输入起始点(-1退出):";
		cin >> from;
		if (from < 0)
			break;
		count = 0;
		//初始化
		Proc* p = new Proc[n];
		flag[from] = true;
		for (i = 0; i < n; i++)
		{
			p[i].dist = map[from][i];
			p[i].way.append(itoa(i, temp,10));
		}
		while (count < n)
		{
			int min = Max;
			for (i = 0; i < n; i++)
				if (flag[i] == false && p[i].dist < min)
				{
					min = p[i].dist;
					j = i;
				}
			if (min == Max)//图不连通
				break;
			flag[j] = true;
			printf("From %d to %d by %s Dist =%.2lf", from, j, p[j].way, p[j].dist);
			for (i = 0; i < n; i++)
				if (flag[i] == false && p[j].dist + map[j][i] < p[i].dist)
				{
					p[i].dist = p[j].dist + map[j][i];
					p[i].way = p[j].way + itoa(i, temp, 10);
				}
		}
		delete[] p;
	}
	return 0;
}

*/

/*
#include<iostream>
#include<string>
#define Max 0x3fffffff
#define MaxSize 20
using namespace std;

int map[MaxSize][MaxSize] = {
	{0, 2, 0, 6, 0, 0, 0, 0, 0, 0},
	{2, 0, 3, 0, 0, 0, 0, 0, 0, 0},
	{0, 3, 0, 1, 0, 0, 0, 3, 0, 0},
	{6, 0, 1, 0, 5, 0, 0, 0, 0, 0},
	{0, 0, 0, 5, 0, 2, 7, 0, 0, 0},
	{0, 0, 0, 0, 2, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 7, 0, 0, 0, 4, 0},
	{0, 0, 3, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 4, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 3, 1, 0}
};

struct Proc {
	double dist;
	string way;
};
int main() {
	int from, count, n = 10, i, j;
	bool flag[MaxSize];
	while (true) {
		memset(flag, false, sizeof(flag));
		cout << "请输入起始点(-1退出):";
		cin >> from;
		if (from < 0) break;
		count = 0;
		// 初始化
		Proc* p = new Proc[n];
		flag[from] = true;
		for (i = 0; i < n; i++) {
			p[i].dist = map[from][i];
			p[i].way = to_string(i); // 用to_string代替itoa
		}
		while (count < n) { // 用小于替代不等于
			int min = Max;
			for (i = 0; i < n; i++)
				if (flag[i] == false && p[i].dist < min) {
					min = p[i].dist;
					j = i;
				}
			if (min == Max) // 图不连通
				break;
			flag[j] = true;
			printf("From %d to %d by %s Dist =%.2lf\n", from, j, p[j].way.c_str(), p[j].dist);
			for (i = 0; i < n; i++)
				if (flag[i] == false && p[j].dist + map[j][i] < p[i].dist) {
					p[i].dist = p[j].dist + map[j][i];
					p[i].way = p[j].way + to_string(i);
				}
			count++; // 计数器需要在此处增加
		}
		delete[] p;
	}
	return 0;
}
*/

/*
#include <iostream>
#include <cstring>
#include <string>
#define Max 0x3fffffff
#define MaxSize 20
using namespace std;

int map[MaxSize][MaxSize] = {
	{0,1,0,1,0,1,0,1,0,1},
	{0,0,1,0,1,0,1,0,1,0},
	{1,0,1,0,0,0,1,0,1,0},
	{0,1,0,1,0,1,0,0,0,1},
	{0,0,0,0,0,0,1,1,0,1},
	{1,1,1,1,0,1,0,1,0,0},
	{1,1,0,1,0,1,0,1,1,0},
	{0,0,0,0,1,1,1,0,1,0},
	{1,0,1,0,1,0,1,0,0,1},
	{1,0,1,1,1,0,1,0,0,0}
};

struct Proc
{
	double dist;
	string way;
};
int main()
{
	char temp[MaxSize];
	int from, count, n = 10, i, j; //n表示点的数目
	bool flag[MaxSize];
	while (true)
	{
		memset(flag, false, sizeof(flag));
		cout << "请输入起始点(-1退出):";
		cin >> from;
		if (from < 0)
			break;
		count = 0;
		//初始化
		Proc* p = new Proc[n];
		flag[from] = true;
		for (i = 0; i < n; i++)
		{
			p[i].dist = map[from][i];
			p[i].way.append(to_string(i));
		}
		while (count < n)
		{
			int min = Max;
			for (i = 0; i < n; i++)
			{
				if (flag[i] == false && p[i].dist < min)
				{
					min = p[i].dist;
					j = i;
				}
			}
			if (min == Max) //图不连通
				break;
			flag[j] = true;
			printf("From %d to %d by %s Dist =%.2lf\n", from, j, p[j].way.c_str(), p[j].dist);
			for (i = 0; i < n; i++)
			{
				if (flag[i] == false && p[j].dist + map[j][i] < p[i].dist)
				{
					p[i].dist = p[j].dist + map[j][i];
					p[i].way = p[j].way + to_string(i);
				}
			}
			count++;
		}
		delete[] p;
	}
	return 0;
}*/


//
//
//#include<iostream>
//using namespace std;
//int t = 0;
//int board[100][100];
//void swap(int d1, int d2, int t1, int t2, int size)
////d1,d2分别表示第几行，第几列，t1,t2分别表示特殊方格的行数，列数
//{
//	int l, s;
//	if (size == 0)return;
//	l = ++t;    //表示L骨编号
//	s = size / 2;
//	if (t1 < d1 + s && t2 < d2 + s)
//		swap(d1, d2, t1, t2, s);
//	else
//	{
//		board[d1 + s - 1][d1 + s - 1] = l;
//		swap(d1, d2, d1 + s - 1, d1 + s - 1, s);
//	}
//	if (t1 < d1 + s && t2 >= d2 + s)
//		swap(d1, d2 + s, t1, t2, s);
//	else
//	{
//		board[d1 + s - 1][d2 + s] = l;
//		swap(d1, d2 + s, d1 + s - 1, d2 + s, s);
//	}
//	if (t1 >= d1 + s && t2 < d2 + s)
//		swap(d1 + s, d2, t1, t2, s);
//	else
//	{
//		board[d1 + s][d2 + s - 1] = l;
//		swap(d1 + s, d2, d1 + s, d2 + s - 1, s);
//	}
//	if (t1 >= d1 + s && t2 >= d2 + s)
//		swap(d1 + s, d2 + s, t1, t2, s);
//	else {
//		board[d1 + s][d2 + s] = l;
//		swap(d1 + s, d2 + s, d1 + s, d2 + s, s);
//	}
//}
//int main()
//{
//	int d1 = 0, d2 = 0;
//	int t1, t2, size;
//	cout << "请依次输入特殊方格的行数，列数分别是：" << endl;
//	cin >> t1 >> t2 ;
//	cout << "请输入棋盘的大小为：" << endl;
//	cin >> size;
//
//	swap(d1, d2, t1, t2, size);
//	swap(0, 0, 1, 1, 4);
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << board[i][j] << '\t';
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//
//
//




/*
#include<iostream>
#include<string>
#define Max 0x3f3f3f3f
#define MaxSize 20
using namespace std;
int map[MaxSize][MaxSize];// map[i][j]=k  表示i到j的距离是k
// 修改部分：增加了一个初始化数组
struct Proc
{
	int dist;
	string way;
};

void Init() {
	memset(map, Max, sizeof(map));
	// 对已经有边连接的两个点之间的距离进行赋值
	map[0][1] = map[1][0] = 2;//点0到点1的距离是2
	map[0][2] = map[2][0] = 5;
	map[1][2] = map[2][1] = 4;
	map[1][3] = map[3][1] = 3;
	map[1][4] = map[4][1] = 1;
	map[2][4] = map[4][2] = 2;
	map[3][4] = map[4][3] = 4;
	map[3][5] = map[5][3] = 2;
	map[4][5] = map[5][4] = 3;
	map[4][6] = map[6][4] = 4;
	map[4][7] = map[7][4] = 3;
	map[5][7] = map[7][5] = 1;
	map[6][7] = map[7][6] = 5;
	map[6][8] = map[8][6] = 1;
	map[7][8] = map[8][7] = 2;
}


int main()
{
	Init();
	char temp[10];
	int from, count, n = 10, i, j; // n表示点的数目
	bool flag[MaxSize];
	while (true)
	{
		memset(flag, false, sizeof(flag));
		cout << "请输入起始点(-1退出,输入的数字小于等于8):";
		cin >> from;
		if (from < 0)
			break;
		count = 0;
		// 初始化
		Proc* p = new Proc[n];
		flag[from] = true;
		for (i = 0; i < n; i++)
		{
			p[i].dist = map[from][i];
			p[i].way = to_string(from) + "->" + to_string(i);
		}
		while (count < n)
		{
			int min = Max;
			for (i = 0; i < n; i++)
			{
				if (flag[i] == false && p[i].dist < min)
				{
					min = p[i].dist;
					j = i;
				}
			}
			if (min == Max) // 图不连通
				break;
			flag[j] = true;
			printf("From %d to %d by %s Dist = %d\n", from, j, p[j].way.c_str(), p[j].dist);
			for (i = 0; i < n; i++)
			{
				if (flag[i] == false && p[j].dist + map[j][i] < p[i].dist)
				{
					p[i].dist = p[j].dist + map[j][i];
					p[i].way = p[j].way + "->" + to_string(i);
				}
			}
			count++;
		}
		delete[] p;
	}
	return 0;
}


*/
/*
#include<iostream>
using namespace std;
class Plant {
	string name;
public:
	Plant(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};
class Garden {
public:
	virtual Plant getShade() = 0;
	virtual Plant getCenter() = 0;
	virtual Plant getBorder() = 0;
	virtual ~Garden() {}
};
class Elegant : public Garden {
public:
	Plant getBorder() {
		return Plant("兰草");
	}
	Plant getCenter() {
		return Plant("榕树");
	}
	Plant getShade() {
		return Plant("郁金香");
	}
};
class Practical : public Garden {
public:
	Plant getShade() {
		return Plant("葡萄");
	}
	Plant getCenter() {
		return Plant("石榴");
	}
	Plant getBorder() {
		return Plant("丝瓜");
	}
};
class Lazy : public Garden {
public:
	Plant getShade() {
		return Plant("月季");
	}
	Plant getCenter() {
		return Plant("茶花");
	}
	Plant getBorder() {
		return Plant("竹");
	}
};
class Technician {
public:
	virtual void trim(Garden* garden) = 0;
	virtual ~Technician() {}
};
class SimpleTechnician : public Technician {
public:
	void trim(Garden* garden) {
		cout << "简单修剪：" << endl;
		Plant shade = garden->getShade();
		Plant center = garden->getCenter();
		Plant border = garden->getBorder();
		cout << "修剪花台上的植物：" << shade.getName() << endl;
		cout << "修剪中间的植物：" << center.getName() << endl;
		cout << "修剪边上的植物：" << border.getName() << endl;
	}
};
class AdvancedTechnician : public Technician {
public:
	void trim(Garden* garden) {
		cout << "高级修剪：" << endl;
		Plant shade = garden->getShade();
		Plant center = garden->getCenter();
		Plant border = garden->getBorder();
		if (shade.getName() == "月季") {
			cout << "割掉月季！" << endl;
		}
		else {
			cout << "修剪花台上的植物：" << shade.getName() << endl;
		}
		if (center.getName() == "榕树") {
			cout << "割掉榕树！" << endl;
		}
		else {
			cout << "修剪中间的植物：" << center.getName() << endl;
		}
		if (border.getName() == "竹") {
			cout << "割掉竹子！" << endl;
		}
		else {
			cout << "修剪边上的植物：" << border.getName() << endl;
		}
	}
};
class GardenMaker {
private:
	static Garden* garden;
public:
	static Garden* getGarden(string type) {
		if (type == "实用型")
			garden = new Practical();
		else if (type == "懒人型")
			garden = new Lazy();
		else
			garden = new Elegant();
		return garden;
	}
};
Garden GardenMaker::garden = 0;
int main() {
	Garden* garden = GardenMaker::getGarden("实用型");
	Technician* technician = new SimpleTechnician();
	technician->trim(garden);
	delete technician;
	cout << endl;
	garden = GardenMaker::getGarden("懒人型");
	technician = new AdvancedTechnician();
	technician->trim(garden);
	delete technician;
	return 0;
}


*/







//2.编写最大字段和问题、快排问题、循环赛日程表等问题的函数。 


//#include <iostream>
//#include <vector>
//using namespace std;
//int maxCrossSubarraySum(vector<int>& nums, int low, int mid, int high) {
//	int leftSum = INT_MIN, rightSum = INT_MIN, sum = 0;
//	for (int i = mid; i >= low; i--) {
//		sum += nums[i];
//		if (leftSum < sum) leftSum = sum;
//	}
//	sum = 0;
//	for (int i = mid + 1; i <= high; i++) {
//		sum += nums[i];
//		if (rightSum < sum) rightSum = sum;
//	}
//	return leftSum + rightSum;
//}
//int maxSubarraySum(vector<int>& nums, int low, int high) {
//	if (low == high) return nums[low];
//	int mid = (low + high) / 2;
//	int leftSum = maxSubarraySum(nums, low, mid);
//	int rightSum = maxSubarraySum(nums, mid + 1, high);
//	int crossSum = maxCrossSubarraySum(nums, low, mid, high);
//	return max(max(leftSum, rightSum), crossSum);
//}
//int main() {
//	vector<int> nums = { 1, -2, 3, 10, -4, 7 };
//	int result = maxSubarraySum(nums, 0, nums.size() - 1);
//	cout << "最大子段和是: " << result << endl;
//	return 0;
//}




//dp

//#include<iostream>
//
//using namespace std;
//const int N = 110;
//int f[N], a[N];	//定义是以i结尾的最大和
//int n;
//
//int main() {
//	cout << "请输入数组长度：";
//	cin >> n;
//	for (int i = 1; i <= n; i++)	scanf_s("%d", &a[i]);
//	f[0] = a[0];
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		f[i] = max(f[i - 1] + a[i], f[i]);
//		res = max(res, f[i]);
//	}
//	cout << res << endl;
//
//	return 0;
//}



//快速排序
/*
#include <iostream>
using namespace std;
const int N = 100010;
int q[N];
void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}
int main()
{
	int n;
	cout << "请输入数组长度：";
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) cin>>q[i];
	quick_sort(q, 0, n - 1);
	for (int i = 0; i < n; i++) cout<<q[i]<<" ";
	return 0;
}
*/


//循环赛程表
//
//#include<iostream>
//using namespace std;
//
//void roundrobin(int* arr, int n) //递归函数
//{
//	if (n == 1) //只有一个人时，退出递归
//		return;
//	int m = n / 2; //将选手分为两半
//	roundrobin(arr, m); //递归计算前一半选手的比赛日程
//	roundrobin(arr + m, m); //递归计算后一半选手的比赛日程
//	for (int i = 0; i < m; i++) 
//	{
//		cout << "天： " << i + 1 << ":\t" << arr[i] << " vs " << arr[i + m] << endl;
//	}
//}
//
//int main()
//{
//	int n;
//	cout << "请输入玩游戏的人 n(n=2^k):" << endl;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)	arr[i] = i + 1;
//	roundrobin(arr, n);
//	delete[]arr; //释放内存
//	return 0;
//}



/*
#include <iostream>
#include <iomanip>

using namespace std;

int Data[1000][1000];

void Full(int number, int begin, int size)
{             //从number 开始填写size 阶方阵，左上角的下标为(begin, begin)
	int i, j, k;
	if (size == 0)             //递归的边界条件，如果size等于0，则无须填写
		return;
	if (size == 1)                         //递归的边界条件，如果size等于1
	{
		Data[begin][begin] = number;         //则只须填写number
		return;
	}
	i = begin; j = begin;                   //初始化左上角下标
	for (k = 0; k < size - 1; k++)            //填写区域A，共填写size - 1个数
	{
		Data[i][j] = number;                 //在当前位置填写number
		number++; i++;                    //行下标加1
	}
	for (k = 0; k < size - 1; k++)            //填写区域B，共填写size - 1个数
	{
		Data[i][j] = number;                 //在当前位置填写number
		number++; j++;                    //列下标加1
	}
	for (k = 0; k < size - 1; k++)            //填写区域C，共填写size - 1个数
	{
		Data[i][j] = number;                //在当前位置填写number
		number++; i--;                    //行下标减1
	}
	for (k = 0; k < size - 1; k++)            //填写区域D，共填写size - 1个数
	{
		Data[i][j] = number;                //在当前位置填写number
		number++; j--;                    //列下标减1
	}
	Full(number, begin + 1, size - 2);       //递归求解，左上角下标为begin + 1
}

int main()
{
	int Size;
	cout << "输入方阵的大小：";
	cin >> Size;
	Full(1, 0, Size);
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			cout << Data[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
*/



/*
#include<iostream>
typedef long long LL;
using namespace std;
int n, m;

int main() {
	cin >> n >> m;

	int sum = 0,flag=0;
	for (int i = 1; i <= n; i++) {
		
		sum = ((i - 1) * i) / 2;

			if ((m - sum) % i == 0) {
				int k = (m - sum) / i;
				for (int p = k; p < k + i; p++)
					cout << p << " ";

				flag = 1;
			}

			if (flag)break;

	}

	return 0;
}

*/

/*
#include<iostream>
using namespace std;

class Building
{
public:

	Building();

	string m_SittingRoom;//客厅

private:

	string m_BedRoom;//卧室

};

class GoodGay
{
public:
	GoodGay();
	GoodGay(Building b);
	//Building* build;//指针方式

	//Building* building;
	Building b;
	Building& building=b;//引用方式

	void visit();//参观函数，访问Building中的属性

};


//类外写成员函数
Building::Building()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";

}


GoodGay::GoodGay(Building b) :building(b){}

//GoodGay::GoodGay(Building b)
//{
//	 //创建建筑物
//	//this->b = b;
//
//	building = b;
//	
//}

void GoodGay::visit()
{
	cout << "好基友类正在访问：" << building.m_SittingRoom << endl;
}

void test01()
{
	Building b;
	GoodGay GG(b);

	GG.visit();
}

int main()
{
	test01();

	return 0;
}


*/

/*

#include <iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#define x first
#define y second
using namespace std;
typedef pair<int, int> PII;
const int N = 2010;
char g[N][N];
int d[N][N];
int n, m, k;
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };


int main() {
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];

	memset(d, -1, sizeof d);
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 && y1 == y2) {
		cout << "0" << endl;
		return 0;
	}

	queue<PII>p;
	p.push({ x1,y1 });
	d[x1][y1] = 0;

	while (p.size()) {
		auto t = p.front();
		p.pop();
		for (int i = 0; i < 4; i++) {
			for (int j = 1; j <= k; j++) {//一条道走到黑
				int a = t.x + dx[i] * j, b = t.y + dy[i] * j;
				if (g[a][b] == '#' || a<1 || a>n || b<1 || b>m)break;
				if (d[a][b] != -1 && d[a][b] <= d[t.x][t.y])break;
				if (d[a][b] != -1)continue;
				d[a][b] = d[t.x][t.y] + 1;
				p.push({ a,b });
				if (a == x2 && b == y2) {
					cout << d[a][b] << endl;
					return 0;
				}
			}
		}
	}

	cout << "-1" << endl;

	return 0;
}

*/

/*
#include<iostream>
#include<string>
using namespace std;
//全局函数做友元
class Building;
//{
// //告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
// friend void GoodGay::visit();
//public:
// Building();
//
//public:
// string m_SittingRoom;
//
//private:
// string m_BedRoom;
//};

class GoodGay
{
public:
	GoodGay();

public:
	void visit();//让visit 可以访问Building中私有内容

	void visit2();//让visit2 不可以访问Building中私有内容

private:

	Building* building;

};

class Building
{
	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
	friend void GoodGay::visit();
public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit正在访问：" << building->m_SittingRoom << endl;

	cout << "visit正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit2正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay GG;
	GG.visit();
	GG.visit2();
}

int main()
{
	test01();

	return 0;
}

*/

/*
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 510;
int f[N][N], a[N][N];
int n;

int main() {
	cout << "请输入数字的个数：";
	cin >> n;
	cout << "请输入数组元素：";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> a[i][j];
			if (i == n)f[i][j] = a[i][j];
		}
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + a[i][j];
		}
	}

	cout << "下面是动态规划后的矩阵："<<endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << f[i][j] << " ";
		}
		cout << endl;
	}

	cout <<"结果是：" << f[1][1] << endl;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int maxAdd[100][100];

int DataTower(int d[n][n])
{
	int MaxAdd[n][n] = { 0 }, path[n][n];
	int i, j;
	for (j = 0; j < n; j++)
		maxAdd[n - 1][j] = d[n - 1][j];
	for (i = n - 2; i >= 0; i--)
		for (j = 0; j <= 0; j++)
			if (maxAdd[i + 1][j] > maxAdd[i + 1][j + 1])
			{
				maxAdd[i][j] = d[i][j] + maxAdd[i + 1][j];
				path[i][j] = j;
			}
			else
			{
				maxAdd[i][j] = d[i][j] + maxAdd[i + 1][j + 1];
				path[i][j] = j + 1;
			}
	printf("路径为：%d", d[0][0]);
	j = path[0][0];
	for (i = 1; i < n; i++)
	{
		printf("-->%d", d[i][j]);
		j = path[i][j];
	}
	return maxAdd[0][0];
}

int main()
{
	int n;
	
}
*/

/*
#include <iostream>
#include <cstring>
using namespace std;

const int N = 110;
const int INF = INT_MAX;

int p[N];		// 存储矩阵的维度
int dp[N][N]; // 存储最小计算量
int Path[N][N]; // 存储断点位置

// 计算最小计算量和断点位置
void Cacl(int n)
{
	// 初始化，单个矩阵的计算量为0，连乘长度为1的计算量为0
	for (int i = 1; i <= n; i++) dp[i][i] = 0;

	// 计算连乘长度为r的最小计算量
	for (int r = 2; r <= n; r++) {
		for (int i = 1; i <= n - r + 1; i++) {
			int j = i + r - 1;
			dp[i][j] = INF;
			for (int k = i; k < j; k++) {
				int q = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (q < dp[i][j]) {
					dp[i][j] = q;
					Path[i][j] = k;
				}
			}
		}
	}
}

// 输出最优的矩阵乘法顺序
void Print(int i, int j)
{
	if (i == j) {
		cout << "A" << i;
		return;
	}
	cout << "(";
	Print(i, Path[i][j]);
	cout << "*";
	Print(Path[i][j] + 1, j);
	cout << ")";
}

int main()
{
	cout << "请输入矩阵个数："<<endl;
	int n;
	cin >> n;
	cout << "请输入矩阵维度(n+1个)：" << endl;
	for (int i = 0; i <= n; i++) cin >> p[i];

	Cacl(n);
	cout << "最小计算量：" << dp[1][n] << endl;
	cout << "最优乘法顺序：";
	Print(1, n);
	cout << endl;

	return 0;
}
*/


/*
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int N = 1010;
int n, m;
char a[N], b[N];
int f[N][N];

int main()
{
	cin >> n >> a + 1 >> m >> b + 1;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			f[i][j] = max(f[i - 1][j], f[i][j - 1]); // 初始化f数组
			if (a[i] == b[j]) f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1); // 如果a[i]和b[j]相等，更新f[i][j]
		}

	cout << f[n][m] << endl; // 输出最长公共子序列长度

	return 0;
}*/




/*
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1010;
int n, m;
int v[N], w[N];
int f[N];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];

	for (int i = 1; i <= n; i++)
		for (int j = m; j >= v[i]; j--)
			f[j] = max(f[j], f[j - v[i]] + w[i]);

	cout << f[m] << endl; // 输出结果

	return 0;
}

*/

















//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	int a, b, n;
//	cin >> n;
//	while (n--) {
//		cin >> a >> b;
//		int c = max(a, b);
//		int d = min(a, b);
//		vector<long>v(d);
//		v[0] = 1; v[1] = 5;
//		for (int i = 2; i < d; i++) {
//			v[i] = v[i-1] * 4 + (i + 1) * (i + 1) + 1;
//		}
//		int p = c - d + 1;
//		cout << v[v.size() - 1] * p << endl;
//	}
//	return 0;
//}

/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n, k,h;
	ios::sync_with_stdio(false);
	cin >> m >> n >> k;
	vector<int>um(m);
	vector<int>v(n);
	while (k--) {
		cin >> h;
		um[h - 1]++;
	}
	for (int i = 0; i < m; i++)
		if (um[i] == 1)
			v[i] = i + 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				v[i] ^= v[j];
				v[j] ^= v[i];
				v[i] ^= v[j];
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;
}*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long n,m;
	cin >> n;
	while (n--) {
		cin >> m;
		cout << pow(m, 3) << endl;
	}
	return 0;
}*/


/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int q;
	cin >> q;
	vector<int>b(q);
	for (int i = 0; i < q; i++) {
		cin >> b[i];
	}
	string ans;
	//sort(b.begin(), b.end());
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i] == v[j]) {
				ans += 'Y';
				break;
			}
			else if (b[i] < v[j]) {
				break;
			}
		}
		if (i != ans.size()-1)ans += 'N';
	}
	cout << ans;
	return 0;
}
*/

/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	unordered_map<int,int>um;
	int a, b;
	for (int j = 0; j < n; j++) {
		scanf("%d", &a);
		um[a]++;
	}
	int q;
	scanf("%d", &q);
	char *ans=new char [q];
	for (int i = 0; i < q;  i++) {
		scanf("%d", &b);
		if (um[b] > 0)ans[i] = 'Y';
		else ans[i] = 'N';
	}
	cout << ans;
	return 0;
}
*/

/*
#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int main() {
	vector<pair<int, int>>v(4);
	int a, b;
	vector<double>ans,p;
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		v[i] = make_pair(a, b);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			double p = sqrt(abs(pow(v[i].first - v[j].first, 2)) + abs(pow(v[i].second - v[j].second, 2)));
			ans.push_back(p);
		}
	}
	// for (auto& i : ans)cout << i << " ";

	//for (auto& i : p)cout<<i<<" ";
	double k = 0;
	for (auto& i : p)k += i;
	printf("%.5f", k/2);
	return 0;
}
*/

/*
# include <iostream>

struct date {
	int year;
	int month;
	int day;
};

int mon[20] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

//闰年 能被4整除，不能被100整除   或者    能被400整除
bool isLeap(int year) {
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int cnt(date a) {
	int y = a.year;
	int m = a.month;
	int d = a.day;

	int sum = 0;
	for (int i = 1; i < y; i++) {
		if (isLeap(i)) {
			sum += 366;
		}
		else {
			sum += 365;
		}
	}

	for (int i = 1; i < m; i++) {
		if (i == 2) {
			if (isLeap(y)) {
				sum += 29;
			}
			else {
				sum += 28;
			}
		}
		else {
			sum += mon[i];
		}
	}

	sum += d - 1;
	return sum;
}

void solve() {
	date d1, d2;
	char c;
	std::cin >> d1.year >> c >> d1.month >> c >> d1.day
		>> d2.year >> c >> d2.month >> c >> d2.day;

	int num1 = cnt(d1);
	std::cout << num1 << "\n";
	int num2 = cnt(d2);

	std::cout << num2 - num1 + 1 << "\n";
}

int main() {
	int T;
	std::cin >> T;
	while (T--) {
		solve();
	}

	return 0;
}
*/

/*
# include <iostream>
# include <algorithm>

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int n, k;
	std::cin >> n >> k;

	int cnt = 0;
	do {
		cnt++;
		if (cnt == k) {
			break;
		}
		//下面四行 仅供测试
		for (int i = 10 - n; i < 10; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << "\n";

	} while (std::next_permutation(a + 10 - n, a + 10, cmp));

	for (int i = 10 - n; i < 10; i++) {
		std::cout << a[i] << " ";
	}

	return 0;
}
*/

/*
# include <iostream>
# include <set>
# include <algorithm>
# include <cstdio>

struct person {
	int id;
	char c;
	int num;

	bool operator < (person rhs) {
		if (c != rhs.c) {//先排字符
			return c < rhs.c;//女人在前面
		}
		else {
			if (num != rhs.num) {//再排数字
				return num > rhs.num;//数字大的在前面
			}
			//再排id id小的在前面
			return id < rhs.id;
		}
	}
};

const int maxn = 1e5 + 5;
person p[maxn];
std::set<int> st;

void solve1() {
	int Q;
	scanf_s("%d", &Q);

	int t;
	while (Q--) {
		scanf_s("%d", &t);
		puts("YES");
	}
}

int main() {
	int n, T;
	std::cin >> n >> T;

	for (int i = 1; i <= n; i++) {
		//scanf_s("%c%d", &p[i].c, &p[i].num);
		std::cin >> p[i].c >> p[i].num;
		p[i].id = i;
	}
	//能够全部治疗	全部输出yes
	if (T >= n) {
		solve1();
		return 0;
	}

	//接下来是不能全部治疗的情况
	std::sort(p + 1, p + n + 1);//先排序
	for (int i = 1; i <= T; i++) {
		st.insert(p[i].id);//把前T个id插入进来
	}

	int Q;
	std::cin >> Q;
	while (Q--) {
		int t;
		scanf_s("%d", &t);
		if (st.find(t) != st.end()) {//查找有没有
			
			puts("YES");
		}
		else {
			puts("NO");
		}
	}

	return 0;
}
*/


/*
#include<iostream>
#include<ctime>
int main() {
	clock_t start = clock();

	int n;
	scanf_s("%d", &n);
	int ans = 0;

	for (int i = 2; i <= n/i; i++) {
		if (n % i == 0) {
			ans += i;
			while (n % i == 0)
			n /= i;
		}
	}

	if (ans + 1+n > 2000)
		std::cout << "YES" << '\n';
	else std::cout << "NO" << '\n';

	clock_t end = clock();
	std::cout << "代码运行了：" << (end - start)/1000.0 << "秒" << '\n';
	return 0;
}
*/

/*
#include<iostream>
#include<string>
#include<ctime>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
	clock_t start = clock();
	std::string a, b;
	std::cin >> a >> b;
	sort(a.begin(), a.end());
	for (int i = 0,j=0; i < b.size(); i++) {
		if (a[j] < b[i]) {
			putchar(a[j++]);
		}
		else {
			putchar(b[i]);
		}
	}

	clock_t end = clock();
	std::cout << "代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';
	return 0;
}
*/

/*
#include<iostream>
#include<queue>
#include<cstring>
#include<ctime>
using namespace std;

typedef pair<int, int> PII;

const int N = 1010;
int  m, n;
queue<PII> q;
char g[N][N];//图
int d[N][N];

int bfs(int x1, int y1, int x2, int y2) {
	memset(d, -1, sizeof d);//初始化为-1   目的是为了做标记

	while (q.size()) {//释放q
		q.pop();
	}

	q.push({ x1,y1 });//先把起始点塞进来
	d[x1][y1] = 0;//起始点赋初值为0

	while (q.size()) {
		PII t = q.front();
		q.pop();
		//如果到了，则返回
		if (t.first == x2 && t.second == y2) return d[x2][y2];

		int dx[] = { -1,0,1,0 };//上下左右
		int dy[] = { 0,-1,0,1 };
		//四个方向全部走一遍
		for (int i = 0; i < 4; i++) {
			int x = t.first + dx[i];
			int y = t.second + dy[i];
			//不越界  并且该路没走过
			if (x > 0 && x <= n && y > 0 && y <= m && g[x][y] == '.' && d[x][y] == -1) {
				d[x][y] = d[t.first][t.second] + 1;
				q.push({ x,y });
			}
		}
	}

	return d[x2][y2];//防止到达不了，输出-1
}

int main() {
	clock_t start = clock();
	int T;
	cin >> T;
	while (T--) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> g[i][j];

		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int res1 = bfs(x1, y1, x2, y2);
		int res2 = bfs(x2, y2, x3, y3);
		//cout<<res1<<" "<<res2<<" ";
		if (res1 == -1 || res2 == -1) cout << "-1" << endl;
		else cout << res1 + res2 << endl;
	}
	clock_t end = clock();
	std::cout << "代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';

	return 0;
}
*/


/*
#include<iostream>
#include<ctime>
int main() {
	clock_t start = clock();
	int a, n,ans,t1,p=0;
	std::cin >> a >> n;
	ans = a;
	int k = a % 10;//a的末尾
	while (n--) {
		std::cin >> t1;
		while (++p) {//进行模拟得出倍数		注意：这里是更关键，++p,不是p++
			//k是上一个尾数  t1是当前尾数
			if ((p * k)%10 == (t1 % 10))
				break;
		}
		ans *= p;
		k = t1 % 10;
		p = 0;
	}
	std::cout << ans;
	clock_t end = clock();
	std::cout << "代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';
	return 0;
}
*/
/*
#include<iostream>
using namespace std;

const int N = 2e5 + 7, inf = 0x3f3f3f3f;
char s[N];
int a[N];
int black[N], white[N];//自动初始化为0

int main()
{
	int n;
	scanf_s("%d", &n);
	std::cin >> s;
	//先做一下标记
	for (int i = 0; i < n; i++)
		if (s[i] == '.')
			a[i + 1] = 0;
		else a[i + 1] = 1;
	int ans = inf;
	//开始计算
	for (int i = 1; i <= n; i++)
		if (a[i] == 0)
		{
			white[i] = white[i - 1] + 1;
			black[i] = black[i - 1];//需要进行维护
		}
		else
		{
			black[i] = black[i - 1] + 1;
			white[i] = white[i - 1];
		}

	for (int i = 0; i <= n; i++)
		ans = min(black[i] + white[n] - white[i], ans);

	cout << ans << endl;
	return 0;
}

*/

//以下的就不知道了

//十六进制转换成八进制
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	while (n--) {
		cin >> s;
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'A') {
				ans += (s[i] - 'A' +10)*pow(16, s.size() - i-1);
			}
			else {
				ans += (s[i] - '0')*pow(16, s.size() - i-1);
			}
		}
		cout << oct<<ans << endl;
		cout << dec;
	}

	return 0;
}
*/

//#include <cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	for (int i = 0; i < (1 << n); i++) //从0～2^n-1个状态
//	{
//		printf("i==%d时\n ", i);
//		for (int j = 0; j < n; j++) //遍历二进制的每一位
//		{
//			if (i & (1 << j))//判断二进制第j位是否存在
//			{
//				printf("%d ", j);//如果存在输出第j个元素
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//



/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string& a, string& b) {
	return a < b;
}

int main() {
	int n;
	cin >> n;
	vector<string>v(n);
	for (int i = 1; i <= n; i++) {
		v[i-1] = to_string(i) + ".mp4";
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < 50; i++)cout << v[i] << endl;
	return 0;
}*/
/*
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 1,flag=0,ans=0,p=2,c=0;//k表示次数 flag==0表示奇数
	while(true) {
		p--;
		for (int j = 0; j < k; j++) {
			
			p += 2;
			c++;
			if (c == n) {
				flag = 1;
				ans = p - 2;
				break;
			}
		}
		k++;
		if (flag)break;
	}
	cout << ans;
	return 0;
}

*/


/*
#include<iostream>
using namespace std;
int main() {
	int n,a=0;
	cin >> n;
	cout << a;
	return 0;
}*/

/*
#include<iostream>
#include<cstring>
#include<set>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<string>se;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		string p = string(s.begin() + i, s.end()) + string(s.begin(), s.begin() + i);

		for (int j = 0; j <= n; j++) {
			se.insert(string(p.begin(), p.begin() + j));
		}
	}
	cout << se.size()-1;
	return 0;
}
*/

/*
#include<iostream>
#include<cstring>
#include<set>

using namespace std;
const int N = 250000+10;
char s1[N];
int main() {
	string s;
	cin >> s;
	strcpy(s1, s.data());
	set<string>se;
	int n = s.size();
	for (int i = 0; i < n; i++) {

		string p = string(s1 + i, s1+n) + string(s1, s1 + i);

		for (int j = 0; j <= n; j++) {
			se.insert(string(p.begin(), p.begin() + j));
		}
	}
	cout << se.size() - 1;
	return 0;
}
*/


//
//#include<iostream>
//#include<ctime>
//using namespace std;
//inline int gcd(int a, int b)
//{
//	while (b ^= a ^= b ^= a %= b);
//	return a;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	int start = clock();
//	
//	long ans = 0;
//	int x, y;
//		for (x = 1; x <= n; x++) {
//			
//			for (y = x; y <= n; y+=x) {
//				if (gcd(x, y) == 1) {
//					ans++;
//				}
//			}
//		}
//		cout << ans%998244353<<endl;
//
//		int end = clock();
//		cout << (end - start) / 1000.0;
//
//	return 0;
//}






//#include<iostream>
//using namespace std;
//
//inline int gcd(int a, int b)
//{
//	while (b ^= a ^= b ^= a %= b);
//	return a;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	long ans = 0;
//	for (int x = 1; x <= n; x++)
//		for (int y = 1; y <= n; y++)
//			if (gcd(x, y) == 1) {
//				ans++;
//				ans%= 998244353;
//			}
//	cout << ans;
//	return 0;
//}



/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, q, a, b,ans=0;
	cin >> n >> q;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	while (q--) {
		cin >> a >> b;
		ans = -1;
		int i = 0;
		int c = a - 1;
		for (i = a;b!=0&&i<n; i++)
			if (v[i] > v[c]) {
				b--;
				if (b == 0)break;
			}
		if (!b)
			cout << i+1 << endl;
		else
			cout << ans << endl;
	}
	return 0;
}

*/

/*
#include<iostream>
#include<math.h>
using namespace std;
int n, k;
bool h1(int x) {
	int p = x;
	while (p) {
		if (p % 10 == k)return false;
		p /= 10;
	}
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
int main() {
	int ans=0;
	cin >> n>>k;
	for (int i = 2; i <= n; i++)
		if (h1(i))
			ans++;
	cout << ans;
	return 0;
}
*/









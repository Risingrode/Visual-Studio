/*#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
const int N = 110;
int a[N];
bool st[N];
int n;

bool Prime(int x) {
	if (x < 2)return false;
	for (int i = 2; i <= (int)sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
bool check() {
	for (int i = 0; i < n-1; i++) {
		if (!Prime(a[i] + a[i + 1]))
			return false;
	}
	return Prime(a[0] + a[n - 1]);
}

void dfs(int k) {
	if (k == n) {
		if (check()) {
			for (int i = 0; i < n; i++)
				cout << a[i] << " ";
			cout << endl;
			return;
		}

	}

	for (int i = 1; i <= n; i++) {
		if (!st[i]) {
			a[k] = i;
			st[i] = true;
			dfs(k + 1);
			st[i] = false;
		}
	}
}

int main() {
	cout << "请输入n:";
	cin >> n;
	dfs(0);
	return 0;
}*/

/*
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>

const int N = 110;
int a[N];

int n;

bool Prime(int x) {
	if (x < 2)return false;
	for (int i = 2; i <= (int)sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
bool check() {
	for (int i = 0; i < n - 1; i++) {
		if (!Prime(a[i] + a[i + 1]))
			return false;
	}
	return Prime(a[0] + a[n - 1]);
}

int main() {
	std::cout << "请输入n:";
	std::cin >> n;
	for (int i = 1; i <= n; i++)a[i - 1] = i;

	do {
		if (check()) {
			for (int i = 0; i < n; i++) {
				std::cout << a[i] << " ";
			}
			std::cout << std::endl;
		}
	} while (std::next_permutation(a, a + n));
	return 0;
}*/

// N 皇后问题
/*
#include <iostream>
#include <cstring>
using namespace std;

const int N = 20;

int n;
int res;
char g[N][N];
bool col[N], dg[N], udg[N];

void dfs(int u)
{
	if (u == n)
	{
		for (int i = 0; i < n; i++) puts(g[i]);
		puts("");
		res++;
		return;
	}

	for (int i = 0; i < n; i++)
		if (!col[i] && !dg[u + i] && !udg[n - u + i])
		{
			g[u][i] = 'Q';
			col[i] = dg[u + i] = udg[n - u + i] = true;
			dfs(u + 1);
			col[i] = dg[u + i] = udg[n - u + i] = false;
			g[u][i] = '.';
		}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			g[i][j] = '.';
	dfs(0);
	printf("总共有%d个结果", res);
	return 0;
}
*/

// 图着色问题
// 这是一个使用回溯法解决图着色问题的例子
// 给定一个无向图和一定数量的颜色，确定是否可能将每个顶点着上给定颜色之一
// 使得相邻的两个顶点没有相同的颜色

/*
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int v, vector<vector<int>>& graph, vector<int>& color, int c) {
	// 检查任何相邻的顶点是否具有相同的颜色
	for (int i = 0; i < graph[v].size(); i++) {
		int neighbor = graph[v][i];
		if (color[neighbor] == c) {
			return false;
		}
	}
	return true;
}

bool graphColoringUtil(vector<vector<int>>& graph, vector<int>& color, int numColors, int v) {
	// 基本情况：所有顶点都已着色
	if (v == graph.size()) {
		return true;
	}

	// 尝试为顶点v尝试所有可能的颜色
	for (int c = 1; c <= numColors; c++) {
		// 检查是否可以使用颜色c为顶点v着色
		if (isSafe(v, graph, color, c)) {
			color[v] = c;
			// 递归地着色其余的图
			if (graphColoringUtil(graph, color, numColors, v + 1)) {
				return true;
			}
			// 撤销颜色分配
			color[v] = 0;
		}
	}
	return false;
}

bool graphColoring(vector<vector<int>>& graph, int numColors) {
	vector<int> color(graph.size(), 0);
	return graphColoringUtil(graph, color, numColors, 0);
}

int main() {
	vector<vector<int>> graph = { {0, 1, 2}, {1, 0, 3}, {2, 0, 3}, {3, 1, 2} };
	int numColors = 3;
	if (graphColoring(graph, numColors)) {
		cout << "图可以用" << numColors << "种颜色着色。" << endl;
	}
	else {
		cout << "图不能用" << numColors << "种颜色着色。" << endl;
	}
	return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	//n个节点 m条边
	cin >> n >> m;

	vector<vector<int>> adj(n + 1); // 用邻接表表示无向图
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> colors(n + 1, -1); // 初始时所有顶点均未着色

	for (int u = 1; u <= n; u++) {
		vector<bool> used(n + 1, false); // 用于记录已经使用的颜色
		for (int &v : adj[u]) {
			if (colors[v] != -1) { // 如果相邻顶点已经被着色
				used[colors[v]] = true; // 将已经使用的颜色记录下来
			}
		}
		// 选择一个未使用的最小颜色
		int c = 1;
		while (used[c]) c++;
		colors[u] = c;
	}

	// 输出所有顶点的颜色
	for (int u = 1; u <= n; u++) {
		cout << "节点 " << u << " 的颜色是： " << colors[u] << endl;
	}

	return 0;
}
*/

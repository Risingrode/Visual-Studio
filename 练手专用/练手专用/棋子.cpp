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
	cout << "������n:";
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
	std::cout << "������n:";
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

// N �ʺ�����
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
	printf("�ܹ���%d�����", res);
	return 0;
}
*/

// ͼ��ɫ����
// ����һ��ʹ�û��ݷ����ͼ��ɫ���������
// ����һ������ͼ��һ����������ɫ��ȷ���Ƿ���ܽ�ÿ���������ϸ�����ɫ֮һ
// ʹ�����ڵ���������û����ͬ����ɫ

/*
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int v, vector<vector<int>>& graph, vector<int>& color, int c) {
	// ����κ����ڵĶ����Ƿ������ͬ����ɫ
	for (int i = 0; i < graph[v].size(); i++) {
		int neighbor = graph[v][i];
		if (color[neighbor] == c) {
			return false;
		}
	}
	return true;
}

bool graphColoringUtil(vector<vector<int>>& graph, vector<int>& color, int numColors, int v) {
	// ������������ж��㶼����ɫ
	if (v == graph.size()) {
		return true;
	}

	// ����Ϊ����v�������п��ܵ���ɫ
	for (int c = 1; c <= numColors; c++) {
		// ����Ƿ����ʹ����ɫcΪ����v��ɫ
		if (isSafe(v, graph, color, c)) {
			color[v] = c;
			// �ݹ����ɫ�����ͼ
			if (graphColoringUtil(graph, color, numColors, v + 1)) {
				return true;
			}
			// ������ɫ����
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
		cout << "ͼ������" << numColors << "����ɫ��ɫ��" << endl;
	}
	else {
		cout << "ͼ������" << numColors << "����ɫ��ɫ��" << endl;
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
	//n���ڵ� m����
	cin >> n >> m;

	vector<vector<int>> adj(n + 1); // ���ڽӱ��ʾ����ͼ
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> colors(n + 1, -1); // ��ʼʱ���ж����δ��ɫ

	for (int u = 1; u <= n; u++) {
		vector<bool> used(n + 1, false); // ���ڼ�¼�Ѿ�ʹ�õ���ɫ
		for (int &v : adj[u]) {
			if (colors[v] != -1) { // ������ڶ����Ѿ�����ɫ
				used[colors[v]] = true; // ���Ѿ�ʹ�õ���ɫ��¼����
			}
		}
		// ѡ��һ��δʹ�õ���С��ɫ
		int c = 1;
		while (used[c]) c++;
		colors[u] = c;
	}

	// ������ж������ɫ
	for (int u = 1; u <= n; u++) {
		cout << "�ڵ� " << u << " ����ɫ�ǣ� " << colors[u] << endl;
	}

	return 0;
}
*/

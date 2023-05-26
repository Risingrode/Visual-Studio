
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int N = 12,M=1010;
int n;
string a[N], b[N];

string Trans(string s) {
	string temp;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == '吗')continue;
		if (s[i] == '?'||(i!=n-1&&s[i]=='?'&&s[i+1]==' '))temp += "!";
		else temp += s[i];
	}
	return temp;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		getline(cin, a[i]);
		b[i] = Trans(a[i]);
	}
	for (int i = 0; i<n; i++) {
		cout << a[i] << endl;
		cout << "AI:" << b[i] << endl;
	}



	return 0;
}
*/



/*#include <iostream>
#include <vector>
using namespace std;
const  int N = 1e5 + 10;
int a[N],dp[N];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)scanf_s("%d", &a[i]);
	int curans = a[1],maxans=a[1];

	for (int i = 2; i <= n; i++) {
		curans = max(a[i], curans + a[i]);
		maxans = max(maxans, curans);
	}

	cout << maxans << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;
vector<int> maxSubArray(vector<int>& nums) {
    //ans记录结果,cur记录累加和
    int ans = nums[0], cur = nums[0];
    //开始下标 结束下标 与之对应的开始下标
    int start = 0, end = 0, curStart = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (cur < 0) {//小于0绝对不符合条件  重新开始  记录此时curStart
            cur = nums[i];
            curStart = i;
        }
        else {
            cur += nums[i];//不小于0，慢慢累加
        }
        if (cur > ans) {//比结果大  记录end下标
            ans = cur;
            start = curStart;
            end = i;
        }
    }
    cout << "最大结果是：" << ans << endl;
    vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(nums[i]);
    }
    return result;
}

int main() {
    int n;
    cout << "输入数组元素个数：";
    cin >> n;
    vector<int> nums(n);
    cout << "输入数组元素：";
    for (int i = 0; i < n; i++)cin >> nums[i];

    
    vector<int> ans = maxSubArray(nums);
    cout << "最大的数组序列是: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}*/





// { -2 1 -3 4 -1 2 1 -5 4 };




/*

1 -2 3 4 -5 6 -7 8 9
 // 输出23

-1 -2 -3 -4 -5
输出-1

-2 -3 4 -1 -2 1 5 -3

*/


/*
#include <iostream>
#include <vector>
using namespace std;

// 二叉查找树节点结构体
struct Node {
    int key; // 节点的键值
    double freq; // 节点的频率
    Node* left, * right; // 左右子节点指针
    Node(int k, double f) : key(k), freq(f), left(nullptr), right(nullptr) {}
};

// 计算最优二叉查找树的函数
double optimalBST(vector<double>& keys, vector<double>& freqs) {
    int n = keys.size();
    vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0.0)); // dp数组
    for (int i = 0; i < n; i++) {
        dp[i][i] = freqs[i]; // 初始化对角线
    }
    for (int len = 2; len <= n; len++) { // 枚举区间长度
        for (int i = 0; i <= n - len; i++) { // 枚举区间起点
            int j = i + len - 1; // 区间终点
            double sum = 0.0; // 频率和
            for (int k = i; k <= j; k++) {
                sum += freqs[k]; // 计算区间频率和
            }
            for (int k = i; k <= j; k++) { // 枚举根节点
                double left = (k == i) ? 0.0 : dp[i][k - 1]; // 左子树的期望代价
                double right = (k == j) ? 0.0 : dp[k + 1][j]; // 右子树的期望代价
                dp[i][j] = max(dp[i][j], left + right + sum); // 更新dp值
            }
        }
    }
    cout << "矩阵图如下：" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                cout << "\t";
            }
            else {
                cout << dp[i][j] << "\t";
            }
        }
        cout << endl;
    }
    return dp[0][n - 1]; // 返回最终结果
}

int main() {
    vector<double> keys = { 0,0.15,0.10,0.05,0.10,0.20 };
    vector<double> freqs = { 0.05 ,0.10 ,0.05 ,0.05 ,0.05 ,0.10 };
    double result = optimalBST( freqs, keys);
    cout << "这个最优二叉查找树的花费是: " << result << endl;
    return 0;
}*/

/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int max_sum(int a[], int n, int* best_i, int* best_j)
{
    int i, j;
    int this_sum[5];
    int sum[5];
    int max = 0;
    this_sum[0] = 0;
    sum[0] = 0;
    *best_i = 0;
    *best_j = 0;
    i = 1;
    for (j = 1; j <= n; j++)
    {
        if (this_sum[j - 1] >= 0)
            this_sum[j] = this_sum[j - 1] + a[j];
        else
        {
            this_sum[j] = a[j];
            i = j;
        }
        if (this_sum[j] < this_sum[j - 1])
            sum[j] = sum[j - 1];
        else
        {
            sum[j] = this_sum[j];
            *best_i = i;
            *best_j = j;
            max = sum[j];
        }
    }
    return max;
}

int main()
{
    int i, j, n, t;
    int a[10];
    cout << "请输入一个数<49" << endl;
    cin >> n;
    cout << "请输入5个数字" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = j = 1;
    t = max_sum(a, n, &i, &j);
    cout << "最大字段和是：" << t << endl;
    cout << "开始位置为：" << i << endl;
    cout << "结束位置为：" << j << endl;
    return 0;
}*/



// Egyptian Fraction problem（埃及分数问题）
//
//#include<iostream>
//using namespace std;
//
//void egyptianFraction(int nr, int dr)
//{
//    if (nr == 0 || dr == 0) // 如果分子或分母为0
//        return;
//
//    if (dr % nr == 0) // 如果分子能整除分母，则直接除法得到分数
//    {
//        cout << "1/" << dr / nr;
//        return;
//    }
//
//    if (nr % dr == 0) // 如果分母能整除分子，则直接得到分数
//    {
//        cout << nr / dr;
//        return;
//    }
//
//    if (nr > dr) // 如果分子大于分母
//    {
//        cout << nr / dr << " + ";
//        egyptianFraction(nr % dr, dr);
//        return;
//    }
//
//    int n = dr / nr + 1; // 找到分母/分子的上取整
//    cout << "1/" << n << " + ";
//    egyptianFraction(nr * n - dr, dr * n); // 递归处理剩余部分
//}
//
//int main()
//{
//    int nr = 0, dr = 0;
//    cout << "请输入两个数，分子与分母 ：";
//    cin >> nr >> dr;
//    egyptianFraction(nr, dr);
//    return 0;
//}



/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "请输入两个数，分子与分母 ：";
    cin >> a >> b;
    while (a != 0) {
        int k = (b + a - 1) / a; // 向上取整
        cout << "1/" << k << " ";
        a = a * k - b;
        b = b * k;
    }
    return 0;
}

*/

/*
// 贪心解法
#include <iostream>
#include <algorithm>
using namespace std;

struct obj {
    int weight; // 物品重量
    int value; // 物品价值
    double ratio; // 价值重量比
};

bool cmp(obj a, obj b) {
    return a.ratio > b.ratio; // 按照价值重量比从大到小排序
}

double knapsack(obj obj[], int n, int capacity) {
    double AllValue = 0.0; // 背包中物品总价值
    sort(obj, obj + n, cmp); // 按照价值重量比从大到小排序
    for (int i = 0; i < n; i++) {
        if (obj[i].weight <= capacity) { // 物品可以完全装入背包
            AllValue += obj[i].value;
            capacity -= obj[i].weight;
        }
        else { // 物品只能部分装入背包
            AllValue += obj[i].ratio * capacity;
            break;
        }
    }
    return AllValue;
}

int main() {
    const int n = 5; // 物品数量
    int capacity = 10; // 背包容量
    obj obj[n] = { {2, 6}, {2, 3}, {6, 5}, {5, 4}, {4, 6} }; // 物品重量和价值
    for (int i = 0; i < n; i++) {
        obj[i].ratio = (double)obj[i].value / obj[i].weight; // 计算价值重量比
    }
    cout << "背包能装入的最大价值为：" << knapsack(obj, n, capacity) << endl;
    return 0;
}
*/

//
////活动安排问题
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Act {
//    int start, end;
//}act[100005];
//
//bool cmp(Act a, Act b) {
//    return a.end < b.end;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> act[i].start >> act[i].end;
//    }
//    sort(act, act + n, cmp);
//    int ans = 1, lastEnd = act[0].end;
//    for (int i = 1; i < n; i++) {
//        if (act[i].start >= lastEnd) {
//            ans++;
//            lastEnd = act[i].end;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}
//

/*


5
1 4
3 5
0 6
5 7
3 8
*/




// 这里是Prim算法的实现，用于寻找图的最小生成树
// 时间复杂度为O(V^2)，其中V是图中顶点的数量
/*
#include <iostream>
#include<vector>
#include <queue>

using namespace std;

const int MAXN = 1005;

vector<pair<int, int>> adj[MAXN]; // 邻接表，存储图的边
int dist[MAXN]; // 存储每个顶点到最小生成树的距离
bool visited[MAXN]; // 标记每个顶点是否已经被访问过

// Prim算法的实现
int prim(int start) {
    // 将所有顶点的距离初始化为无穷大
    for (int i = 1; i <= MAXN; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    // 优先队列，用于存储顶点及其距离
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // 起始顶点的距离为0
    dist[start] = 0;

    // 将起始顶点加入优先队列
    pq.push(make_pair(0, start));

    int total_weight = 0; // 最小生成树的总权重

    while (!pq.empty()) {
        // 从优先队列中取出距离最小的顶点
        int u = pq.top().second;
        pq.pop();

        // 如果该顶点已经被访问过，则跳过
        if (visited[u]) {
            continue;
        }

        // 标记该顶点已经被访问过
        visited[u] = true;

        // 将该顶点的边权值加入总权重
        total_weight += dist[u];

        // 更新与该顶点相邻的顶点的距离
        for (auto v : adj[u]) {
            if (!visited[v.first] && v.second < dist[v.first]) {
                dist[v.first] = v.second;
                pq.push(make_pair(dist[v.first], v.first));
            }
        }
    }

    return total_weight;
}

int main() {
    // 构造一个无向图
    // 5个节点，6条边
    // 边的权重分别为1, 2, 3, 4, 5, 6
    adj[1].push_back(make_pair(2, 1));
    adj[2].push_back(make_pair(1, 1));
    adj[1].push_back(make_pair(3, 2));
    adj[3].push_back(make_pair(1, 2));
    adj[2].push_back(make_pair(3, 3));
    adj[3].push_back(make_pair(2, 3));
    adj[2].push_back(make_pair(4, 4));
    adj[4].push_back(make_pair(2, 4));
    adj[3].push_back(make_pair(4, 5));
    adj[4].push_back(make_pair(3, 5));
    adj[4].push_back(make_pair(5, 6));
    adj[5].push_back(make_pair(4, 6));

    // 从第一个节点开始构造最小生成树
    int total_weight = prim(1);

    // 输出最小生成树的总权重
    cout << "最小生成树的总权重为：" << total_weight << endl;

    return 0;
}
*/

//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1010;
//int a[N];
//
//int main() {
//    int n;
//    cin >> n;
//    
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    sort(a, a + n);
//    int range = a[n - 1] - a[0];
//    cout << range << endl;
//}
//






/*
#include <iostream>
#include <cmath>
using namespace std;

int N;//圆的个数
const int maxn = 10;
double r[maxn];//圆半径 
double x[maxn];//圆心横坐标 
double best[maxn];//最佳排列 
double MIN = 0x3f3f3f3f;//当前最优


double center(int i) {//第i个圆的坐标
    double y = 0;
    double temp;
    for (int j = 1; j < i; j++) {
        temp = x[j] + 2.0 * sqrt(r[i] * r[j]);//计算坐标 
        if (temp > y)	y = temp;
    }
    return y;
}

//计算排列后的长度
void compute() {
    double left = 0, right = 0;
    for (int i = 1; i <= N; i++) {
        if (x[i] - r[i] < left)	    left = x[i] - r[i];
        if (x[i] + r[i] > right)	right = x[i] + r[i];
    }
    if ((right - left) < MIN) {
        MIN = right - left;//更新最小 
        for (int i = 1; i <= N; i++)	best[i] = r[i];//记录最佳排列； 
    }
}

void back(int i) {
    if (i == N + 1) {
        for (int i = 1; i <= N; i++)	cout << r[i] << " ";
        // cout << "长度是：" << MIN ;
        cout << endl;
        compute();//排完了 
    }
    else {
        for (int j = i; j <= N; j++) {
            swap(r[i], r[j]);
            double cen = center(i);
            if (r[1] + r[i] + cen < MIN) {
                x[i] = cen;
                back(i + 1);
            }
            swap(r[i], r[j]);
        }
    }
}

int main() {
    cout << "输入圆的个数：";
    //cin >> N;
    N = 4;
    cout << "输入圆的半径：";
    //for (int k = 1; k <= N; k++)	cin >> r[k];
    r[1] = 1, r[2] = 2, r[3] = 3, r[4] = 4;

    back(1);

    cout << "最优圆排列顺序时：";
    for (int i = 1; i <= N; i++)	cout << best[i] << " ";
    cout << endl << "排列的长度为：";
    cout << MIN;
    return 0;
}
*/




/*
该代码实现了最小排列长度的圆排列问题，具体实现方法是使用回溯算法，
首先枚举每一个圆在最优排列中的位置，然后通过计算圆的圆心坐标和排列长度，
进行递归操作，最终得到最优的圆排列顺序和最小排列长度。

 compute函数：可以想象其中任意的一个圆无限大或无限小，无限大的话那其余的圆就可以统统忽略了。
 因为已知所有圆的x[]和r[],很容易求出每个圆的左右坐标，通过比较找出最小的左部坐标和最大的右部坐标，
 一减就是该圆排列的长度，然后把每次不同的排列长度相比较，找到更小的minlen就更新。


*/

/*
#include <iostream>
#include <cstring>
using namespace std;
const int N = 10;
int n;
double a[N], path[N];
bool st[N];

double get(int i)  // 获取第i个位置需要的数
{
    if (i == 1) return a[1];
    return a[i] - a[i - 1]; // 返回差值
}

double calc() // 计算一次路径的长度
{
    double res = 0;
    for (int i = 1; i < n; i++) res += get(path[i]);
    res += get(path[n]) + a[n]; // 计算最后一个位置的距离
    return res;
}

bool dfs(int u, double depth, double& ans) // u表示当前搜索到了第几个位置，depth表示当前的深度，ans表示最小长度
{
    if (depth + calc() > ans) return false; // 剪枝，如果当前长度+剩余路径长度>ans，那么就不用再搜索下去了

    if (u == n + 1) // 搜索完了所有的位置，更新答案
    {
        ans = calc();
        return true;
    }

    for (int i = 1; i <= n; i++) // 枚举可用的数字
    {
        if (!st[i]) // 如果当前数字还没有被使用过
        {
            st[i] = true;
            path[u] = i;
            if (dfs(u + 1, depth + 1, ans)) return true; // 搜索下一个位置
            st[i] = false;
        }
    }

    return false;
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> a[i];

    double ans = 1e5;
    dfs(1, 0, ans);

    cout << ans << endl;

    return 0;
}*/




/*首先，我们定义一个数组a，表示每个位置上需要的数，题目中给出的是每个数的差值，我们可以累加差值得到a数组。

然后我们使用一个path数组来表示当前已经确定的路径，dfs函数中的u表示当前搜索到了第几个位置，depth表示当前的深度，ans表示最小长度。

在dfs中，我们首先进行剪枝操作，如果当前长度+剩余路径长度>ans，那么就不用再搜索下去了。

然后我们枚举可用的数字，如果当前数字还没有被使用过，就将其加入路径中，搜索下一个位置，如果找到了一个可行解，就更新答案。

最后输出最小长度即可。


分支限界法是一种常见的解决最优化问题的算法。它是一种普遍的回溯算法的扩展，它在回溯的基础上增加了剪枝策略，以缩小搜索空间，提高搜索效率。该算法被广泛应用于组合优化、图论、排程、装载问题等领域。

分支限界法的核心思想是将问题转化为一个决策树，树的每个节点表示该问题的一个部分解，而树的每个分支表示该问题的一个可行解的扩展。在搜索过程中，每次都选取一个可行解的最优分支进行扩展，直到找到一个完整的可行解或发现无解。分支限界法在搜索时，通过剪枝操作来减少搜索空间，提高搜索效率，同时保证最终得到的解是最优的。

分支限界法的基本步骤如下：
1. 定义状态空间：将问题转化为一个决策树，并定义每个节点的状态。
2. 定义优先队列：定义一个优先队列来保存搜索过程中的部分解，优先队列中的元素按照某个评价函数的值进行排序。
3. 初始状态：将初始状态压入优先队列中。
4. 扩展状态：从优先队列中取出一个部分解进行扩展，将扩展得到的新状态压入优先队列中。
5. 剪枝操作：根据问题的特性，判断某个部分解是否可行，如果不可行，则将该部分解从优先队列中删除。
6. 求解过程：不断进行步骤4和步骤5，直到找到一个完整的可行解或者优先队列为空。

分支限界法的优点在于，它能够有效地解决复杂的组合优化问题，同时保证得到最优解。然而，分支限界法的实现较为复杂，需要设计合适的状态空间、优先队列和剪枝策略，
因此在实际应用中需要仔细分析问题的特点，选择合适的算法和数据结构。
*/







//
//
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int a[5] = { 1,2,3,4,5 };
//void swap(int a[], int m, int n) {
//    int k = a[m];
//    a[m] = a[n];
//    a[n] = k;
//}
//void allsort(int a[], int k, int m) {
//    if (k == m) {//如果待全排列数组，起始等于末尾，说明已经产生了一种结果，进行输出
//        for (int i = 0; i <= k; i++) {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//    else {
//        for (int i = k; i <= m; i++) {
//            swap(a, i, k);//交换当前元素与i位置的元素
//            allsort(a, k + 1, m);//对当前元素之后的元素进行全排列
//            swap(a, i, k);//回溯
//        }
//    }
//}
//int main() {
//    allsort(a, 0, 4);
//    return 0;
//}
//




//
//
//#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//    int n, i;
//    double x, y;
//    double d, pi;
//    int sum = 0;
//    srand(time(0));   //初始化随机种子
//    cin >> n;          //输入试验点的总数
//    for (i = 1; i <= n; i++)
//    {
//        //产生一个均匀分布的随机点(x,y)
//        x = rand() / double(RAND_MAX);    //产生0到1之间的均匀分布随机数
//        y = rand() / double(RAND_MAX);
//        d = sqrt(x * x + y * y);
//        if (d <= 1.0)     //如果点在圆内
//            sum++;       //则累加圆内点的个数
//    }
//    pi = 4.0 * sum / n;  //计算圆周率的估计值
//    cout << "pi = " << pi << endl;
//    return 0;
//}



/*
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 1e6;


int son[N][2], cnt[N], idx;
// 0号点既是根节点，又是空节点
// son[][]存储树中每个节点的子节点
// cnt[]存储以每个节点结尾的单词数量

// 插入一个字符串
void insert(char* str)
{
    int p = 0;
    for (int i = 0; str[i]; i++)
    {
        int u = str[i] - '0';
        if (!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }
    cnt[p]++;
}

// 查询字符串出现的次数
int query(char* str)
{
    int p = 0;
    for (int i = 0; str[i]; i++)
    {
        int u = str[i] - '0';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}


int main() {
    char c;
    while (cin >> c) {
        char t = getchar();
        if (t == '\n')break;
			insert(&c);
            query(&c);
	}
    

    return 0;
}*/




/*
#include <iostream>
#include<math.h>
using namespace std;

int N;//圆的个数
const int maxn = 10;
double r[maxn];//圆半径 
double x[maxn];//圆心横坐标 
double best[maxn];//最佳排列 
double MIN = 0x3f3f3f3f;//当前最优


double center(int i) {//第i个园的坐标
    double y = 0;
    double temp;
    for (int j = 1; j < i; j++) {
        temp = x[j] + 2.0 * sqrt(r[i] * r[j]);//计算坐标 
        if (temp > y)	y = temp;
    }

    return y;
}

void compute() {
    double left = 0, right = 0;
    for (int i = 1; i <= N; i++) {
        if (x[i] - r[i] < left)	left = x[i] - r[i];

        if (x[i] + r[i] > right)	right = x[i] + r[i];
    }
    if ((right - left) < MIN) {
        MIN = right - left;//更新最小 
        for (int i = 1; i <= N; i++)	best[i] = r[i];//记录最佳排列； 
    }

}

void back(int i) {
    if (i == N + 1)	compute();//排完了 
    else {
        for (int j = i; j <= N; j++) {
            swap(r[i], r[j]);
            double cen = center(i);
            if (r[1] + r[i] + cen < MIN) {
                x[i] = cen;
                back(i + 1);
            }
            swap(r[i], r[j]);
        }
    }
}

int main() {
    cout << "输入圆的个数：";
    cin >> N;
    cout << "输入圆的半径：";
    for (int k = 1; k <= N; k++)	cin >> r[k];
    back(1);
    cout << "最优园排列顺序时：";
    for (int i = 1; i <= N; i++)	cout << best[i] << " ";
    cout << endl << "排列的长度为：";
    cout << MIN;

}

*/

/*
#include <iostream>
#include <queue>
using namespace std;

// 物品结构体
struct Item {
    int weight;  // 物品重量
    int value;   // 物品价值
};

// 节点结构体
struct Node {
    int level;       // 当前节点所在层级
    int value;       // 当前节点的累计价值
    int weight;      // 当前节点的累计重量
    double bound;    // 当前节点的价值上界
};

// 比较函数，用于优先队列的排序
struct Compare {
    bool operator()(const Node& a, const Node& b) {
        return a.bound < b.bound;
    }
};

// 分支限界法解决 01 背包问题
int knapsack01(Item items[], int n, int capacity) {
    priority_queue<Node, vector<Node>, Compare> pq;  // 优先队列，按照节点的价值上界排序
    Node u, v;

    // 创建根节点
    u.level = -1;
    u.value = 0;
    u.weight = 0;

    // 计算根节点的价值上界
    u.bound = 0.0;
    for (int i = 0; i < n; i++) {
        u.bound += items[i].value;
    }

    pq.push(u);  // 将根节点加入优先队列

    int maxValue = 0;  // 最大价值

    while (!pq.empty()) {
        u = pq.top();
        pq.pop();

        // 如果当前节点的价值上界小于最大价值，则不再扩展该节点
        if (u.bound > maxValue) {
            // 扩展左子节点（选择该物品）
            v.level = u.level + 1;
            v.weight = u.weight + items[v.level].weight;
            v.value = u.value + items[v.level].value;

            // 计算左子节点的价值上界
            v.bound = u.bound;
            if (v.weight <= capacity) {
                v.bound -= items[v.level].value;
                if (v.level == n - 1) {
                    maxValue = v.value;
                }
                else {
                    pq.push(v);
                }
            }

            // 扩展右子节点（不选择该物品）
            v.weight = u.weight;
            v.value = u.value;

            // 计算右子节点的价值上界
            v.bound = u.bound;
            if (v.level == n - 1) {
                maxValue = max(maxValue, v.value);
            }
            else {
                pq.push(v);
            }
        }
    }

    return maxValue;
}

int main() {
    int n;  // 物品数量
    int capacity;  // 背包容量

    cout << "请输入物品数量：";
    cin >> n;

    cout << "请输入背包容量：";
    cin >> capacity;

    Item items[100];

    cout << "请依次输入每个物品的重量和价值：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;
    }

    int maxValue = knapsack01(items, n, capacity);
    cout << "背包能够容纳的最大价值为：" << maxValue << endl;

    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Person {
    int id;
    int skill;

    Person(int _id, int _skill) : id(_id), skill(_skill) {}
};

struct Node {
    int level;
    int skillSum;
    vector<Person> path;

    Node(int _level, int _skillSum, const vector<Person>& _path)
        : level(_level), skillSum(_skillSum), path(_path) {}
};

struct CompareNodes {
    bool operator()(const Node& n1, const Node& n2) {
        return n1.skillSum < n2.skillSum;
    }
};

int allocatePeople(const vector<int>& skills, int k) {
    priority_queue<Node, vector<Node>, CompareNodes> pq;

    int n = skills.size();
    pq.push(Node(0, 0, {}));

    int maxSkillSum = 0;

    while (!pq.empty()) {
        Node currentNode = pq.top();
        pq.pop();

        int currentLevel = currentNode.level;
        int currentSkillSum = currentNode.skillSum;
        vector<Person> currentPath = currentNode.path;

        if (currentLevel == n) {
            maxSkillSum = max(maxSkillSum, currentSkillSum);
        }
        else if (currentLevel < n) {
            Person currentPerson(currentLevel, skills[currentLevel]);

            vector<Person> newPathWithoutCurrent = currentPath;
            pq.push(Node(currentLevel + 1, currentSkillSum, newPathWithoutCurrent));

            vector<Person> newPathWithCurrent = currentPath;
            newPathWithCurrent.push_back(currentPerson);
            int newSkillSum = currentSkillSum + currentPerson.skill;
            pq.push(Node(currentLevel + 1, newSkillSum, newPathWithCurrent));
        }
    }

    return maxSkillSum;
}

int main() {
    int n;
    cout << "请输入人物数量：";
    cin >> n;

    vector<int> skills(n);
    cout << "请依次输入每个人物的技能值：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> skills[i];
    }

    int k;
    cout << "请输入要分配的人物数量：";
    cin >> k;

    int maxSkillSum = allocatePeople(skills, k);

    cout << "分配的人物技能值总和的最大值为：" << maxSkillSum << endl;

    return 0;
}*/

#include <iostream>
#include <vector>
#include<string>
#include <queue>
#include <unordered_set>
using namespace std;

// 狼、羊、菜过河问题的函数
bool isSafe(vector<bool>& bank) {
    if (bank[0] && bank[1] && !bank[2])  // 羊和菜在一侧，但没有狼
        return false;
    if (!bank[0] && !bank[1] && bank[2])  // 狼和羊在一侧，但没有菜
        return false;
    return true;
}

void wolfSheepCabbage() {
    vector<bool> startBank = { true, true, true };  // 初始岸的状态
    vector<bool> endBank = { false, false, false };  // 目标岸的状态

    queue<pair<vector<bool>, string>> q;  // 使用队列来进行广度优先搜索
    unordered_set<string> visited;  // 用于记录已经访问过的状态
    q.push({ startBank, "" });  // 初始状态入队
    visited.insert("TTT");  // 记录初始状态

    while (!q.empty()) {
        vector<bool> currentBank = q.front().first;
        string currentPath = q.front().second;
        q.pop();

        if (currentBank == endBank) {
            cout << "解决方案：" << currentPath << endl;
            return;
        }

        // 狼过河
        if (currentBank[0]) {
            vector<bool> newBank = currentBank;
            newBank[0] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "W" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // 羊过河
        if (currentBank[1]) {
            vector<bool> newBank = currentBank;
            newBank[1] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "S" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // 菜过河
        if (currentBank[2]) {
            vector<bool> newBank = currentBank;
            newBank[2] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "C" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // 什么都不过河
        vector<bool> newBank = currentBank;
        if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
            q.push({ newBank, currentPath + "N" });
            visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
        }
    }

    cout << "无解" << endl;
}

// 马的周游遍历问题的函数
bool isSafe(int x, int y, vector<vector<bool>>& visited, int N) {
    if (x >= 0 && x < N && y >= 0 && y < N && !visited[x][y])
        return true;
    return false;
}

void horseTour(int N, int startX, int startY) {
    vector<vector<bool>> visited(N, vector<bool>(N, false));  // 记录每个格子的访问状态

    // 马可以走的8个方向
    vector<int> dx = { -2, -2, -1, -1, 1, 1, 2, 2 };
    vector<int> dy = { -1, 1, -2, 2, -2, 2, -1, 1 };

    queue<pair<int, int>> q;  // 使用队列来进行广度优先搜索
    q.push({ startX, startY });  // 初始位置入队
    visited[startX][startY] = true;  // 标记初始位置为已访问

    while (!q.empty()) {
        int currentX = q.front().first;
        int currentY = q.front().second;
        q.pop();

        cout << "(" << currentX << "," << currentY << ") ";

        // 尝试所有可能的下一步位置
        for (int i = 0; i < 8; i++) {
            int newX = currentX + dx[i];
            int newY = currentY + dy[i];
            if (isSafe(newX, newY, visited, N)) {
                q.push({ newX, newY });
                visited[newX][newY] = true;
            }
        }
    }
}

int main() {
    // 狼、羊、菜过河问题
    cout << "狼、羊、菜过河问题的解决方案：" << endl;
    wolfSheepCabbage();
    cout << endl;

    // 马的周游遍历问题
    int N = 8;  // 棋盘大小
    int startX = 0;  // 马的初始横坐标
    int startY = 0;  // 马的初始纵坐标

    cout << "马的周游遍历问题的解决方案：" << endl;
    horseTour(N, startX, startY);

    return 0;
}





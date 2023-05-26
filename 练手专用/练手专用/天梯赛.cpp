
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
		if (s[i] == '��')continue;
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
    //ans��¼���,cur��¼�ۼӺ�
    int ans = nums[0], cur = nums[0];
    //��ʼ�±� �����±� ��֮��Ӧ�Ŀ�ʼ�±�
    int start = 0, end = 0, curStart = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (cur < 0) {//С��0���Բ���������  ���¿�ʼ  ��¼��ʱcurStart
            cur = nums[i];
            curStart = i;
        }
        else {
            cur += nums[i];//��С��0�������ۼ�
        }
        if (cur > ans) {//�Ƚ����  ��¼end�±�
            ans = cur;
            start = curStart;
            end = i;
        }
    }
    cout << "������ǣ�" << ans << endl;
    vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(nums[i]);
    }
    return result;
}

int main() {
    int n;
    cout << "��������Ԫ�ظ�����";
    cin >> n;
    vector<int> nums(n);
    cout << "��������Ԫ�أ�";
    for (int i = 0; i < n; i++)cin >> nums[i];

    
    vector<int> ans = maxSubArray(nums);
    cout << "��������������: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}*/





// { -2 1 -3 4 -1 2 1 -5 4 };




/*

1 -2 3 4 -5 6 -7 8 9
 // ���23

-1 -2 -3 -4 -5
���-1

-2 -3 4 -1 -2 1 5 -3

*/


/*
#include <iostream>
#include <vector>
using namespace std;

// ����������ڵ�ṹ��
struct Node {
    int key; // �ڵ�ļ�ֵ
    double freq; // �ڵ��Ƶ��
    Node* left, * right; // �����ӽڵ�ָ��
    Node(int k, double f) : key(k), freq(f), left(nullptr), right(nullptr) {}
};

// �������Ŷ���������ĺ���
double optimalBST(vector<double>& keys, vector<double>& freqs) {
    int n = keys.size();
    vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0.0)); // dp����
    for (int i = 0; i < n; i++) {
        dp[i][i] = freqs[i]; // ��ʼ���Խ���
    }
    for (int len = 2; len <= n; len++) { // ö�����䳤��
        for (int i = 0; i <= n - len; i++) { // ö���������
            int j = i + len - 1; // �����յ�
            double sum = 0.0; // Ƶ�ʺ�
            for (int k = i; k <= j; k++) {
                sum += freqs[k]; // ��������Ƶ�ʺ�
            }
            for (int k = i; k <= j; k++) { // ö�ٸ��ڵ�
                double left = (k == i) ? 0.0 : dp[i][k - 1]; // ����������������
                double right = (k == j) ? 0.0 : dp[k + 1][j]; // ����������������
                dp[i][j] = max(dp[i][j], left + right + sum); // ����dpֵ
            }
        }
    }
    cout << "����ͼ���£�" << endl;
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
    return dp[0][n - 1]; // �������ս��
}

int main() {
    vector<double> keys = { 0,0.15,0.10,0.05,0.10,0.20 };
    vector<double> freqs = { 0.05 ,0.10 ,0.05 ,0.05 ,0.05 ,0.10 };
    double result = optimalBST( freqs, keys);
    cout << "������Ŷ���������Ļ�����: " << result << endl;
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
    cout << "������һ����<49" << endl;
    cin >> n;
    cout << "������5������" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = j = 1;
    t = max_sum(a, n, &i, &j);
    cout << "����ֶκ��ǣ�" << t << endl;
    cout << "��ʼλ��Ϊ��" << i << endl;
    cout << "����λ��Ϊ��" << j << endl;
    return 0;
}*/



// Egyptian Fraction problem�������������⣩
//
//#include<iostream>
//using namespace std;
//
//void egyptianFraction(int nr, int dr)
//{
//    if (nr == 0 || dr == 0) // ������ӻ��ĸΪ0
//        return;
//
//    if (dr % nr == 0) // ���������������ĸ����ֱ�ӳ����õ�����
//    {
//        cout << "1/" << dr / nr;
//        return;
//    }
//
//    if (nr % dr == 0) // �����ĸ���������ӣ���ֱ�ӵõ�����
//    {
//        cout << nr / dr;
//        return;
//    }
//
//    if (nr > dr) // ������Ӵ��ڷ�ĸ
//    {
//        cout << nr / dr << " + ";
//        egyptianFraction(nr % dr, dr);
//        return;
//    }
//
//    int n = dr / nr + 1; // �ҵ���ĸ/���ӵ���ȡ��
//    cout << "1/" << n << " + ";
//    egyptianFraction(nr * n - dr, dr * n); // �ݹ鴦��ʣ�ಿ��
//}
//
//int main()
//{
//    int nr = 0, dr = 0;
//    cout << "���������������������ĸ ��";
//    cin >> nr >> dr;
//    egyptianFraction(nr, dr);
//    return 0;
//}



/*
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "���������������������ĸ ��";
    cin >> a >> b;
    while (a != 0) {
        int k = (b + a - 1) / a; // ����ȡ��
        cout << "1/" << k << " ";
        a = a * k - b;
        b = b * k;
    }
    return 0;
}

*/

/*
// ̰�Ľⷨ
#include <iostream>
#include <algorithm>
using namespace std;

struct obj {
    int weight; // ��Ʒ����
    int value; // ��Ʒ��ֵ
    double ratio; // ��ֵ������
};

bool cmp(obj a, obj b) {
    return a.ratio > b.ratio; // ���ռ�ֵ�����ȴӴ�С����
}

double knapsack(obj obj[], int n, int capacity) {
    double AllValue = 0.0; // ��������Ʒ�ܼ�ֵ
    sort(obj, obj + n, cmp); // ���ռ�ֵ�����ȴӴ�С����
    for (int i = 0; i < n; i++) {
        if (obj[i].weight <= capacity) { // ��Ʒ������ȫװ�뱳��
            AllValue += obj[i].value;
            capacity -= obj[i].weight;
        }
        else { // ��Ʒֻ�ܲ���װ�뱳��
            AllValue += obj[i].ratio * capacity;
            break;
        }
    }
    return AllValue;
}

int main() {
    const int n = 5; // ��Ʒ����
    int capacity = 10; // ��������
    obj obj[n] = { {2, 6}, {2, 3}, {6, 5}, {5, 4}, {4, 6} }; // ��Ʒ�����ͼ�ֵ
    for (int i = 0; i < n; i++) {
        obj[i].ratio = (double)obj[i].value / obj[i].weight; // �����ֵ������
    }
    cout << "������װ�������ֵΪ��" << knapsack(obj, n, capacity) << endl;
    return 0;
}
*/

//
////���������
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




// ������Prim�㷨��ʵ�֣�����Ѱ��ͼ����С������
// ʱ�临�Ӷ�ΪO(V^2)������V��ͼ�ж��������
/*
#include <iostream>
#include<vector>
#include <queue>

using namespace std;

const int MAXN = 1005;

vector<pair<int, int>> adj[MAXN]; // �ڽӱ��洢ͼ�ı�
int dist[MAXN]; // �洢ÿ�����㵽��С�������ľ���
bool visited[MAXN]; // ���ÿ�������Ƿ��Ѿ������ʹ�

// Prim�㷨��ʵ��
int prim(int start) {
    // �����ж���ľ����ʼ��Ϊ�����
    for (int i = 1; i <= MAXN; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    // ���ȶ��У����ڴ洢���㼰�����
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // ��ʼ����ľ���Ϊ0
    dist[start] = 0;

    // ����ʼ����������ȶ���
    pq.push(make_pair(0, start));

    int total_weight = 0; // ��С����������Ȩ��

    while (!pq.empty()) {
        // �����ȶ�����ȡ��������С�Ķ���
        int u = pq.top().second;
        pq.pop();

        // ����ö����Ѿ������ʹ���������
        if (visited[u]) {
            continue;
        }

        // ��Ǹö����Ѿ������ʹ�
        visited[u] = true;

        // ���ö���ı�Ȩֵ������Ȩ��
        total_weight += dist[u];

        // ������ö������ڵĶ���ľ���
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
    // ����һ������ͼ
    // 5���ڵ㣬6����
    // �ߵ�Ȩ�طֱ�Ϊ1, 2, 3, 4, 5, 6
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

    // �ӵ�һ���ڵ㿪ʼ������С������
    int total_weight = prim(1);

    // �����С����������Ȩ��
    cout << "��С����������Ȩ��Ϊ��" << total_weight << endl;

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

int N;//Բ�ĸ���
const int maxn = 10;
double r[maxn];//Բ�뾶 
double x[maxn];//Բ�ĺ����� 
double best[maxn];//������� 
double MIN = 0x3f3f3f3f;//��ǰ����


double center(int i) {//��i��Բ������
    double y = 0;
    double temp;
    for (int j = 1; j < i; j++) {
        temp = x[j] + 2.0 * sqrt(r[i] * r[j]);//�������� 
        if (temp > y)	y = temp;
    }
    return y;
}

//�������к�ĳ���
void compute() {
    double left = 0, right = 0;
    for (int i = 1; i <= N; i++) {
        if (x[i] - r[i] < left)	    left = x[i] - r[i];
        if (x[i] + r[i] > right)	right = x[i] + r[i];
    }
    if ((right - left) < MIN) {
        MIN = right - left;//������С 
        for (int i = 1; i <= N; i++)	best[i] = r[i];//��¼������У� 
    }
}

void back(int i) {
    if (i == N + 1) {
        for (int i = 1; i <= N; i++)	cout << r[i] << " ";
        // cout << "�����ǣ�" << MIN ;
        cout << endl;
        compute();//������ 
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
    cout << "����Բ�ĸ�����";
    //cin >> N;
    N = 4;
    cout << "����Բ�İ뾶��";
    //for (int k = 1; k <= N; k++)	cin >> r[k];
    r[1] = 1, r[2] = 2, r[3] = 3, r[4] = 4;

    back(1);

    cout << "����Բ����˳��ʱ��";
    for (int i = 1; i <= N; i++)	cout << best[i] << " ";
    cout << endl << "���еĳ���Ϊ��";
    cout << MIN;
    return 0;
}
*/




/*
�ô���ʵ������С���г��ȵ�Բ�������⣬����ʵ�ַ�����ʹ�û����㷨��
����ö��ÿһ��Բ�����������е�λ�ã�Ȼ��ͨ������Բ��Բ����������г��ȣ�
���еݹ���������յõ����ŵ�Բ����˳�����С���г��ȡ�

 compute�����������������������һ��Բ���޴������С�����޴�Ļ��������Բ�Ϳ���ͳͳ�����ˡ�
 ��Ϊ��֪����Բ��x[]��r[],���������ÿ��Բ���������꣬ͨ���Ƚ��ҳ���С��������������Ҳ����꣬
 һ�����Ǹ�Բ���еĳ��ȣ�Ȼ���ÿ�β�ͬ�����г�����Ƚϣ��ҵ���С��minlen�͸��¡�


*/

/*
#include <iostream>
#include <cstring>
using namespace std;
const int N = 10;
int n;
double a[N], path[N];
bool st[N];

double get(int i)  // ��ȡ��i��λ����Ҫ����
{
    if (i == 1) return a[1];
    return a[i] - a[i - 1]; // ���ز�ֵ
}

double calc() // ����һ��·���ĳ���
{
    double res = 0;
    for (int i = 1; i < n; i++) res += get(path[i]);
    res += get(path[n]) + a[n]; // �������һ��λ�õľ���
    return res;
}

bool dfs(int u, double depth, double& ans) // u��ʾ��ǰ�������˵ڼ���λ�ã�depth��ʾ��ǰ����ȣ�ans��ʾ��С����
{
    if (depth + calc() > ans) return false; // ��֦�������ǰ����+ʣ��·������>ans����ô�Ͳ�����������ȥ��

    if (u == n + 1) // �����������е�λ�ã����´�
    {
        ans = calc();
        return true;
    }

    for (int i = 1; i <= n; i++) // ö�ٿ��õ�����
    {
        if (!st[i]) // �����ǰ���ֻ�û�б�ʹ�ù�
        {
            st[i] = true;
            path[u] = i;
            if (dfs(u + 1, depth + 1, ans)) return true; // ������һ��λ��
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




/*���ȣ����Ƕ���һ������a����ʾÿ��λ������Ҫ��������Ŀ�и�������ÿ�����Ĳ�ֵ�����ǿ����ۼӲ�ֵ�õ�a���顣

Ȼ������ʹ��һ��path��������ʾ��ǰ�Ѿ�ȷ����·����dfs�����е�u��ʾ��ǰ�������˵ڼ���λ�ã�depth��ʾ��ǰ����ȣ�ans��ʾ��С���ȡ�

��dfs�У��������Ƚ��м�֦�����������ǰ����+ʣ��·������>ans����ô�Ͳ�����������ȥ�ˡ�

Ȼ������ö�ٿ��õ����֣������ǰ���ֻ�û�б�ʹ�ù����ͽ������·���У�������һ��λ�ã�����ҵ���һ�����н⣬�͸��´𰸡�

��������С���ȼ��ɡ�


��֧�޽編��һ�ֳ����Ľ�����Ż�������㷨������һ���ձ�Ļ����㷨����չ�����ڻ��ݵĻ����������˼�֦���ԣ�����С�����ռ䣬�������Ч�ʡ����㷨���㷺Ӧ��������Ż���ͼ�ۡ��ų̡�װ�����������

��֧�޽編�ĺ���˼���ǽ�����ת��Ϊһ��������������ÿ���ڵ��ʾ�������һ�����ֽ⣬������ÿ����֧��ʾ�������һ�����н����չ�������������У�ÿ�ζ�ѡȡһ�����н�����ŷ�֧������չ��ֱ���ҵ�һ�������Ŀ��н�����޽⡣��֧�޽編������ʱ��ͨ����֦���������������ռ䣬�������Ч�ʣ�ͬʱ��֤���յõ��Ľ������ŵġ�

��֧�޽編�Ļ����������£�
1. ����״̬�ռ䣺������ת��Ϊһ����������������ÿ���ڵ��״̬��
2. �������ȶ��У�����һ�����ȶ������������������еĲ��ֽ⣬���ȶ����е�Ԫ�ذ���ĳ�����ۺ�����ֵ��������
3. ��ʼ״̬������ʼ״̬ѹ�����ȶ����С�
4. ��չ״̬�������ȶ�����ȡ��һ�����ֽ������չ������չ�õ�����״̬ѹ�����ȶ����С�
5. ��֦������������������ԣ��ж�ĳ�����ֽ��Ƿ���У���������У��򽫸ò��ֽ�����ȶ�����ɾ����
6. �����̣����Ͻ��в���4�Ͳ���5��ֱ���ҵ�һ�������Ŀ��н�������ȶ���Ϊ�ա�

��֧�޽編���ŵ����ڣ����ܹ���Ч�ؽ�����ӵ�����Ż����⣬ͬʱ��֤�õ����Ž⡣Ȼ������֧�޽編��ʵ�ֽ�Ϊ���ӣ���Ҫ��ƺ��ʵ�״̬�ռ䡢���ȶ��кͼ�֦���ԣ�
�����ʵ��Ӧ������Ҫ��ϸ����������ص㣬ѡ����ʵ��㷨�����ݽṹ��
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
//    if (k == m) {//�����ȫ�������飬��ʼ����ĩβ��˵���Ѿ�������һ�ֽ�����������
//        for (int i = 0; i <= k; i++) {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//    else {
//        for (int i = k; i <= m; i++) {
//            swap(a, i, k);//������ǰԪ����iλ�õ�Ԫ��
//            allsort(a, k + 1, m);//�Ե�ǰԪ��֮���Ԫ�ؽ���ȫ����
//            swap(a, i, k);//����
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
//    srand(time(0));   //��ʼ���������
//    cin >> n;          //��������������
//    for (i = 1; i <= n; i++)
//    {
//        //����һ�����ȷֲ��������(x,y)
//        x = rand() / double(RAND_MAX);    //����0��1֮��ľ��ȷֲ������
//        y = rand() / double(RAND_MAX);
//        d = sqrt(x * x + y * y);
//        if (d <= 1.0)     //�������Բ��
//            sum++;       //���ۼ�Բ�ڵ�ĸ���
//    }
//    pi = 4.0 * sum / n;  //����Բ���ʵĹ���ֵ
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
// 0�ŵ���Ǹ��ڵ㣬���ǿսڵ�
// son[][]�洢����ÿ���ڵ���ӽڵ�
// cnt[]�洢��ÿ���ڵ��β�ĵ�������

// ����һ���ַ���
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

// ��ѯ�ַ������ֵĴ���
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

int N;//Բ�ĸ���
const int maxn = 10;
double r[maxn];//Բ�뾶 
double x[maxn];//Բ�ĺ����� 
double best[maxn];//������� 
double MIN = 0x3f3f3f3f;//��ǰ����


double center(int i) {//��i��԰������
    double y = 0;
    double temp;
    for (int j = 1; j < i; j++) {
        temp = x[j] + 2.0 * sqrt(r[i] * r[j]);//�������� 
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
        MIN = right - left;//������С 
        for (int i = 1; i <= N; i++)	best[i] = r[i];//��¼������У� 
    }

}

void back(int i) {
    if (i == N + 1)	compute();//������ 
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
    cout << "����Բ�ĸ�����";
    cin >> N;
    cout << "����Բ�İ뾶��";
    for (int k = 1; k <= N; k++)	cin >> r[k];
    back(1);
    cout << "����԰����˳��ʱ��";
    for (int i = 1; i <= N; i++)	cout << best[i] << " ";
    cout << endl << "���еĳ���Ϊ��";
    cout << MIN;

}

*/

/*
#include <iostream>
#include <queue>
using namespace std;

// ��Ʒ�ṹ��
struct Item {
    int weight;  // ��Ʒ����
    int value;   // ��Ʒ��ֵ
};

// �ڵ�ṹ��
struct Node {
    int level;       // ��ǰ�ڵ����ڲ㼶
    int value;       // ��ǰ�ڵ���ۼƼ�ֵ
    int weight;      // ��ǰ�ڵ���ۼ�����
    double bound;    // ��ǰ�ڵ�ļ�ֵ�Ͻ�
};

// �ȽϺ������������ȶ��е�����
struct Compare {
    bool operator()(const Node& a, const Node& b) {
        return a.bound < b.bound;
    }
};

// ��֧�޽編��� 01 ��������
int knapsack01(Item items[], int n, int capacity) {
    priority_queue<Node, vector<Node>, Compare> pq;  // ���ȶ��У����սڵ�ļ�ֵ�Ͻ�����
    Node u, v;

    // �������ڵ�
    u.level = -1;
    u.value = 0;
    u.weight = 0;

    // ������ڵ�ļ�ֵ�Ͻ�
    u.bound = 0.0;
    for (int i = 0; i < n; i++) {
        u.bound += items[i].value;
    }

    pq.push(u);  // �����ڵ�������ȶ���

    int maxValue = 0;  // ����ֵ

    while (!pq.empty()) {
        u = pq.top();
        pq.pop();

        // �����ǰ�ڵ�ļ�ֵ�Ͻ�С������ֵ��������չ�ýڵ�
        if (u.bound > maxValue) {
            // ��չ���ӽڵ㣨ѡ�����Ʒ��
            v.level = u.level + 1;
            v.weight = u.weight + items[v.level].weight;
            v.value = u.value + items[v.level].value;

            // �������ӽڵ�ļ�ֵ�Ͻ�
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

            // ��չ���ӽڵ㣨��ѡ�����Ʒ��
            v.weight = u.weight;
            v.value = u.value;

            // �������ӽڵ�ļ�ֵ�Ͻ�
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
    int n;  // ��Ʒ����
    int capacity;  // ��������

    cout << "��������Ʒ������";
    cin >> n;

    cout << "�����뱳��������";
    cin >> capacity;

    Item items[100];

    cout << "����������ÿ����Ʒ�������ͼ�ֵ��" << endl;
    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;
    }

    int maxValue = knapsack01(items, n, capacity);
    cout << "�����ܹ����ɵ�����ֵΪ��" << maxValue << endl;

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
    cout << "����������������";
    cin >> n;

    vector<int> skills(n);
    cout << "����������ÿ������ļ���ֵ��" << endl;
    for (int i = 0; i < n; i++) {
        cin >> skills[i];
    }

    int k;
    cout << "������Ҫ���������������";
    cin >> k;

    int maxSkillSum = allocatePeople(skills, k);

    cout << "��������＼��ֵ�ܺ͵����ֵΪ��" << maxSkillSum << endl;

    return 0;
}*/

#include <iostream>
#include <vector>
#include<string>
#include <queue>
#include <unordered_set>
using namespace std;

// �ǡ��򡢲˹�������ĺ���
bool isSafe(vector<bool>& bank) {
    if (bank[0] && bank[1] && !bank[2])  // ��Ͳ���һ�࣬��û����
        return false;
    if (!bank[0] && !bank[1] && bank[2])  // �Ǻ�����һ�࣬��û�в�
        return false;
    return true;
}

void wolfSheepCabbage() {
    vector<bool> startBank = { true, true, true };  // ��ʼ����״̬
    vector<bool> endBank = { false, false, false };  // Ŀ�갶��״̬

    queue<pair<vector<bool>, string>> q;  // ʹ�ö��������й����������
    unordered_set<string> visited;  // ���ڼ�¼�Ѿ����ʹ���״̬
    q.push({ startBank, "" });  // ��ʼ״̬���
    visited.insert("TTT");  // ��¼��ʼ״̬

    while (!q.empty()) {
        vector<bool> currentBank = q.front().first;
        string currentPath = q.front().second;
        q.pop();

        if (currentBank == endBank) {
            cout << "���������" << currentPath << endl;
            return;
        }

        // �ǹ���
        if (currentBank[0]) {
            vector<bool> newBank = currentBank;
            newBank[0] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "W" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // �����
        if (currentBank[1]) {
            vector<bool> newBank = currentBank;
            newBank[1] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "S" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // �˹���
        if (currentBank[2]) {
            vector<bool> newBank = currentBank;
            newBank[2] = false;
            if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
                q.push({ newBank, currentPath + "C" });
                visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
            }
        }

        // ʲô��������
        vector<bool> newBank = currentBank;
        if (isSafe(newBank) && visited.find(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2])) == visited.end()) {
            q.push({ newBank, currentPath + "N" });
            visited.insert(to_string(newBank[0]) + to_string(newBank[1]) + to_string(newBank[2]));
        }
    }

    cout << "�޽�" << endl;
}

// ������α�������ĺ���
bool isSafe(int x, int y, vector<vector<bool>>& visited, int N) {
    if (x >= 0 && x < N && y >= 0 && y < N && !visited[x][y])
        return true;
    return false;
}

void horseTour(int N, int startX, int startY) {
    vector<vector<bool>> visited(N, vector<bool>(N, false));  // ��¼ÿ�����ӵķ���״̬

    // ������ߵ�8������
    vector<int> dx = { -2, -2, -1, -1, 1, 1, 2, 2 };
    vector<int> dy = { -1, 1, -2, 2, -2, 2, -1, 1 };

    queue<pair<int, int>> q;  // ʹ�ö��������й����������
    q.push({ startX, startY });  // ��ʼλ�����
    visited[startX][startY] = true;  // ��ǳ�ʼλ��Ϊ�ѷ���

    while (!q.empty()) {
        int currentX = q.front().first;
        int currentY = q.front().second;
        q.pop();

        cout << "(" << currentX << "," << currentY << ") ";

        // �������п��ܵ���һ��λ��
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
    // �ǡ��򡢲˹�������
    cout << "�ǡ��򡢲˹�������Ľ��������" << endl;
    wolfSheepCabbage();
    cout << endl;

    // ������α�������
    int N = 8;  // ���̴�С
    int startX = 0;  // ��ĳ�ʼ������
    int startY = 0;  // ��ĳ�ʼ������

    cout << "������α�������Ľ��������" << endl;
    horseTour(N, startX, startY);

    return 0;
}





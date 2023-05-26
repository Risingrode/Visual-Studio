/*
#define _CRT_SECURE_NO_WARNINGS
//插入排序、希尔排序、起泡排序、快速排序、选择排序
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include<fstream>
#include<ctime>
using namespace std;

vector<int>s;

void SaveFile(const char* name, vector<int>& temp) {
     FILE *fp = fopen(name, "w");
     int n = temp.size(),i=0;
     while (i!=n-1) {
         fprintf(fp, "%d\t\t", temp[i++]);
         if (i % 10 == 0)
             fprintf(fp, "\n");
     }
     fclose(fp);

     cout << name << "创建完毕！" << endl;

}



// 冒泡排序
void bubble_sort(vector<int>a,int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
    SaveFile("冒泡排序.txt", a);
}

// 选择排序
void select_sort(vector<int>a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[min] > a[j]) min = j;
        swap(a[i], a[min]);
    }
    SaveFile("选择排序.txt", a);
}

// 插入排序
void insert_sort(vector<int>a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
            swap(a[j - 1], a[j]), j--;
    }
    SaveFile("插入排序.txt", a);
}

// 希尔排序
void shell_sort(vector<int>a, int n)
{
    // 将待排序序列分隔成若干子序列
    for (int step = n / 2; step > 0; step /= 2)
    {
        // 插入排序
        for (int i = step; i < n; i++)
        {
            int j = i;
            while (j >= step && a[j - step] > a[j])
                swap(a[j], a[j - step]), j -= step;
        }
    }
    SaveFile("希尔排序.txt", a);
}

// 快速排序
void quick_sort(int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = s[l + r >> 1];
    while (i < j)
    {
        do i++; while (s[i] < x);
        do j--; while (s[j] > x);
        if (i < j) swap(s[i], s[j]);
    }
    quick_sort(l, j);
    quick_sort(j + 1, r);
}

void test1() {

    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 100000 + 1;//在1~100000之间
    cout << "随机数生成完毕！" << endl;

    clock_t start = clock();
    bubble_sort(v, n);
    clock_t end = clock();
    cout << "冒泡排序代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';
    
}

void test2() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//在1~10000之间
    cout << "随机数生成完毕！" << endl;

    clock_t start = clock();
    select_sort(v, n);
    clock_t end = clock();
    cout << "选择排序代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';

}

void test3() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//在1~10000之间
    cout << "随机数生成完毕！" << endl;

    clock_t start = clock();
    insert_sort(v, n);
    clock_t end = clock();
    cout << "插入排序代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';

}

void test4() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//在1~10000之间
    cout << "随机数生成完毕！" << endl;

    clock_t start = clock();
    shell_sort(v, n);
    clock_t end = clock();
    cout << "希尔排序代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';

}

void test5() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//在1~10000之间
    cout << "随机数生成完毕！" << endl;
    s = v;

    clock_t start = clock();
    quick_sort(0, n - 1);
    clock_t end = clock();
    cout << "快速排序代码运行了：" << (end - start) / 1000.0 << "秒" << '\n';

    SaveFile("快速排序.txt", s);
}


int main()
{
    srand((unsigned int)time(NULL));
    test1();
    test2();
    test3();
    test4();
    test5();

    return 0;
}
*/





//12题
/*#include<iostream>
using namespace std;
int p[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
bool isRun(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100);
}
int days(int year, int mouth) {
    if (mouth == 2 && isRun(year))
        return 28;
    else
        return p[mouth];
}

void main() {
    cout << days(2022, 11);
}
*/

//13题
/*
#include<iostream>
using namespace std;

int main() {
    char a[100], b[100];
    cin >> a >> b;
    int p = strlen(a),k=strlen(b);
    for (int i = 0; i < strlen(b); i++) {
        a[p + i] = b[i];
    }
    int i = 0;
    while (i!=p+k)
        cout << a[i++];

    return 0;
}
*/

//14题
//#include<iostream>
//
//using namespace std;
//
//bool isFun(int n) {
//    if (n == 1)return 0;
//    for (int i = 2; i < sqrt(n); i++)
//        if (n % i)
//            return 0;
//    return 1;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    if (isFun(n))
//        cout << "是素数" << endl;
//    else
//        cout << "不是素数" << endl;
//
//    return 0;
//}





/*
#include<iostream>
#include<unordered_map>
using namespace std;
int n;

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        unordered_map<char, int>um;
        char p;
        for (int i = 0; i < n; i++) {
            cin >> p;
            um[p]++;
        }
        int res = 0,flag=0;
        for (auto u : um) {
            if (u.second & 1)flag = 1, res += (u.second - 1);
            else res += u.second;
            
        }
        cout << res+flag << endl;
    }
    return 0;
}
*/

/*
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, k,j=0;
    string s;
    map<int, string>m;//从小到大开始排
    for (int i = 0; i < n; i++) {
        cin >> a>>s;
        m[a] = s;
    }
    cin >> k;
    for (auto& i : m) {
        if(n==k+j+1)   cout << i.second << endl;
        j++;
    }

    return 0;
}
*/


/*
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

const int N = 1010;
string s[N];

void solve(int len,string c) {

    for (int i = 0; i < len/2; i++) {
        cout << s[i] << " " << s[len - i - 1] << " ";
    }
    //是奇数
    if (len & 1)cout << s[(len - 1) / 2] << " ";
    cout<<"\b" << c << endl;
    return;
}

int main() {
    int T;
    cin >> T;
    for (int j = 0; j < T; j++) {
        int i = 0;
        string c;
        while (cin >> s[i++]) {
            int n = s[i - 1].size();
            if (s[i-1][n - 1] == '.' || s[i-1][n - 1] == '!' || s[i-1][n - 1] == '?') {
                c = s[i-1][n - 1];
                s[i - 1]= s[i - 1].substr(0,s[i-1].size()-1);
                break;
            }
        }
        solve(i,c);
    }
    return 0;
}

*/



/*
#include<iostream>
#include<time.h>
#include<algorithm>
#include<unordered_map>

using namespace std;

double a[15], b[15],ans[15];

int main() {
    srand((unsigned int)time(NULL));
    int lun = 1;
    while (true) {
        cout << "第" << lun << "轮" << endl;
        int cor = 0;
        for (unsigned i = 0; i < 10; i++) {
            cout << "第" << i + 1 << "题是：        ";
            //数字范围是50以内
            double x = rand() % 20, y = rand() % 20 + 1;
            int p = rand() % 4;
            if (p == 0) {
                cout << x << " + " << y << "=?" << endl;
                ans[i] = x + y;
            }
            else if (p == 1) {
                cout << x << " - " << y << "=?" << endl;
                ans[i] = x - y;
            }
            else if (p == 2) {
                cout << x << " X " << y << "=?" << endl;
                ans[i] = x * y;
            }
            else {
                int m = (x / p) * x;
                cout << m << " / " << x << "=?" << endl;
                ans[i] = m / x;
            }
        }

        cout << "请输入你的答案每个答案用空格分隔开：" << endl;
        double p;
        unordered_map<int, double>um;
        for (unsigned i = 0; i < 10; i++) {
            //cout << ans[i] << endl;
            cin >> p;
            if (p != ans[i])
                um.insert(pair<int, double>(i + 1, ans[i]));
        }

        for (auto& i : um)
            cout << "第" << i.first << "个题计算错误,正确答案是：" << ans[i.first] << endl;
        cout << "正确率是：" << double(um.size() / 10) << endl;

        cout << endl << "按enter键进入下一轮检测" << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

*/



















/*
#define _CRT_SECURE_NO_WARNINGS
//��������ϣ�������������򡢿�������ѡ������
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

     cout << name << "������ϣ�" << endl;

}



// ð������
void bubble_sort(vector<int>a,int n)
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
    SaveFile("ð������.txt", a);
}

// ѡ������
void select_sort(vector<int>a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[min] > a[j]) min = j;
        swap(a[i], a[min]);
    }
    SaveFile("ѡ������.txt", a);
}

// ��������
void insert_sort(vector<int>a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
            swap(a[j - 1], a[j]), j--;
    }
    SaveFile("��������.txt", a);
}

// ϣ������
void shell_sort(vector<int>a, int n)
{
    // �����������зָ�������������
    for (int step = n / 2; step > 0; step /= 2)
    {
        // ��������
        for (int i = step; i < n; i++)
        {
            int j = i;
            while (j >= step && a[j - step] > a[j])
                swap(a[j], a[j - step]), j -= step;
        }
    }
    SaveFile("ϣ������.txt", a);
}

// ��������
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
    for (int i = 0; i < n; i++) v[i] = rand() % 100000 + 1;//��1~100000֮��
    cout << "�����������ϣ�" << endl;

    clock_t start = clock();
    bubble_sort(v, n);
    clock_t end = clock();
    cout << "ð��������������ˣ�" << (end - start) / 1000.0 << "��" << '\n';
    
}

void test2() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//��1~10000֮��
    cout << "�����������ϣ�" << endl;

    clock_t start = clock();
    select_sort(v, n);
    clock_t end = clock();
    cout << "ѡ��������������ˣ�" << (end - start) / 1000.0 << "��" << '\n';

}

void test3() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//��1~10000֮��
    cout << "�����������ϣ�" << endl;

    clock_t start = clock();
    insert_sort(v, n);
    clock_t end = clock();
    cout << "����������������ˣ�" << (end - start) / 1000.0 << "��" << '\n';

}

void test4() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//��1~10000֮��
    cout << "�����������ϣ�" << endl;

    clock_t start = clock();
    shell_sort(v, n);
    clock_t end = clock();
    cout << "ϣ��������������ˣ�" << (end - start) / 1000.0 << "��" << '\n';

}

void test5() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) v[i] = rand() % 10000 + 1;//��1~10000֮��
    cout << "�����������ϣ�" << endl;
    s = v;

    clock_t start = clock();
    quick_sort(0, n - 1);
    clock_t end = clock();
    cout << "����������������ˣ�" << (end - start) / 1000.0 << "��" << '\n';

    SaveFile("��������.txt", s);
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





//12��
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

//13��
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

//14��
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
//        cout << "������" << endl;
//    else
//        cout << "��������" << endl;
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
    map<int, string>m;//��С����ʼ��
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
    //������
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
        cout << "��" << lun << "��" << endl;
        int cor = 0;
        for (unsigned i = 0; i < 10; i++) {
            cout << "��" << i + 1 << "���ǣ�        ";
            //���ַ�Χ��50����
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

        cout << "��������Ĵ�ÿ�����ÿո�ָ�����" << endl;
        double p;
        unordered_map<int, double>um;
        for (unsigned i = 0; i < 10; i++) {
            //cout << ans[i] << endl;
            cin >> p;
            if (p != ans[i])
                um.insert(pair<int, double>(i + 1, ans[i]));
        }

        for (auto& i : um)
            cout << "��" << i.first << "����������,��ȷ���ǣ�" << ans[i.first] << endl;
        cout << "��ȷ���ǣ�" << double(um.size() / 10) << endl;

        cout << endl << "��enter��������һ�ּ��" << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

*/



















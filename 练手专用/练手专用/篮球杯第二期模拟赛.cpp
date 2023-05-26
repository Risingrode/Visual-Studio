/*
1.2048 2.26390 3.1038 4.592 5.32
*/






/*
小蓝正在拷贝一份文件，他现在已经拷贝了 t 秒时间，已经拷贝了 c 字节，
文件总共有 s 字节，如果拷贝是匀速进行的，请问小蓝大概还需要拷贝多少秒？
*/


/*
#include<iostream>

using namespace std;


int main() {
	long long t, c, s;
	cin >> t >> c >> s;
	cout << ((s - c) * t) / c<<endl;
	return 0;
}*/

/*
　小蓝有 n 个单词，但是单词中有一些是重复的，请帮小蓝去除重复的单词。
输入格式
　　输入第一行包含一个正整数 n ，表示小蓝的单词数量。
　　接下来 n 行，每行包含一个由小写字母组成的单词。
输出格式
　　请输出去除重复后的那些单词。如果一个单词出现了多遍，请保留第一次出现的单词，去除之后出现的单词，按输入的顺序输出。
*/

/*
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main() {
	int n;
	string s;
	unordered_set<string>st;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> s;
		st.insert(s);
	}
	for (auto& i : st)
		cout << i << endl;
	return 0;
}*/

/*
#include<iostream>
#include<string>
using namespace std;
string s;
int n;

bool fun(int x) {

	for (int i = x,j=n-1; i <j; i++,j--)
		if (s[i] != s[j])
			return false;
	return true;
}

int main() {
	string temp;
	cin >> s;
	n = s.size();
	for (int i = 0; i < n; i++) {
		if (fun(i)) {
			reverse(temp.begin(), temp.end());
			s += temp;
			break;
		}
		temp += s[i];
	}
	cout << s << endl;
	return 0;
}

*/


/*
给定一个字母矩阵。一个 X 图形由中心点和由中心点向四个45度斜线方向引出的直线段组成，
四条线段的长度相同，而且四条线段上的字母和中心点的字母相同。
　　一个 X图形可以使用三个整数 r, c, L 来描述，其中 r, c 表示中心点位于第 r 行第 c 列，
  正整数 L 表示引出的直线段的长度。 对于 1 到 L 之间的每个整数 i，X图形满足：第 r-i 行第 c-i 列与第 r 行第 c 列相同，
  第 r-i 行第 c+i 列与第 r 行第 c 列相同，第 r+i 行第 c-i 列与第 r 行第 c 列相同，第 r+i 行第 c+i 列与第 r 行第 c 列相同。
　　例如，对于下面的字母矩阵中，所有的字母 L 组成一个 X图形，其中中间的 5 个 L 也组成一个 X图形。所有字母 Q 组成了一个 X图形。
　　LAAALA
　　ALQLQA
　　AALQAA
　　ALQLQA
　　LAAALA

 输入格式
　　输入第一行包含两个整数 n, m，分别表示字母矩阵的行数和列数。
　　接下来 n 行，每行 m 个大写字母，为给定的矩阵。
输出格式
　　输出一行，包含一个整数，表示答案。
*/

/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n, m;
const int N = 200;
vector<string>g(N);
//左上 左下 右下 右上
int dx[4] = {-1,-1,1,1}, dy[4] = {-1,1,1,-1};

int fun(int x, int y) {
	int flag = 0;
	int x1[4] = { 0,0,0,0 }, y1[4] = { 0,0,0,0 };
	int p = 0,k=4;

	while (true) {
		for (int i = 0; i < 4; i++) {
			x1[i] = x + (p + 1) * dx[i], y1[i] = y + (p + 1) * dy[i];
			if (x1[i] < 0 || x1[i] >= m || y1[i] < 0 || y1[i] >= n)
				return flag;
		}

		for (int i = 1; i < k; i++) {
		if (g[x1[i]][y1[i]] != g[x1[i - 1]][y1[i - 1]])
			return flag;
		}
		flag++;
		p++;
	}
	return flag;
}

int main() {
	cin >> n >> m;
	string s;
	int ans = 0;
	for (int i = 0; i < n; i++)
		cin >> g[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += fun(i, j);
		}
	}
	cout << ans << endl;
	return 0;
}
*/


/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
	long long ans = 0, n = 0;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j]) {
				ans += v[i];
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
*/










/*
#include<iostream>
#include<queue> 
#include<malloc.h>
using namespace std;

template <class T>
struct BiNode {
	T data;
	BiNode<T>* lchild, * rchild;
};
int max(int a, int b) {
	return a > b ? a : b;
}


template <class T>
class BiTree {
public:
	BiTree(); //构造函数，初始化一棵空的二叉树 
	~BiTree()//二叉树的析构函数算法 BiTree 
	{
		Release(root);
	}
	void InOrder() { InOrder(root); } //中序遍历二叉树 
	void PreOrder() { PreOrder(root); }
	void PostOrder() { PostOrder(root); } //后序遍历二叉树 
	void LeverOrder() { LeverOrder(root); } //层序遍历二叉树 
	void Count() { Count(root); }
	void PreOrdercnt() { PreOrdercnt(root); }
	int Depth() { int www = Depth(root); return www; }
	BiNode<T>* root; //指向根结点的头指针 
	
	void PreOrder(BiNode<T>* root); //前序遍历二叉树 
	void InOrder(BiNode<T>* root);
	void PostOrder(BiNode<T>* root);
	void LeverOrder(BiNode<T>* root); //层序遍历二叉树 
	void Release(BiNode<T>* root); //析构函数调用 
	void Count(BiNode<T>* root);/////求二叉树的结点个数 
	void PreOrdercnt(BiNode<T>* root);///设计算法按前序次序打印二叉树中的叶子结点;
	int Depth(BiNode<T>* root);//深度； 
	void CreateBinaryTree(BiNode<char>* T);
};
template <class T>
BiTree<T>::BiTree() {
	//Creat(root);
}
template <class T>
void BiTree<T>::CreateBinaryTree(BiNode<char>* T) {
	char ch;
	cin >> ch;
	//递归的终止条件，如果输入#号创建空指针，说明当前节点左子树已创建完毕
	if (ch == '#')
		T = NULL;
	else {
		T = (BiNode<char>*)malloc(sizeof(BiNode<char>*));
		T->data = ch;
		//左子树创建完成之后，才会去创建右子树，而不是左右子树同时创建
		CreateBinaryTree(T->lchild);
		CreateBinaryTree(T->rchild);
	}
}


template <class T>
void BiTree<T>::LeverOrder(BiNode<T>* root)
{
	BiNode<T>* Q[100];
	int front = 0, rear = 0; //采用顺序队列，并假定不会发生上溢 
	if (root == NULL) return;
	Q[++rear] = root;
	while (front != rear)
	{
		BiNode<T>* q = Q[++front];
		cout << q->data << " ";
		if (q->lchild != NULL) Q[++rear] = q->lchild;
		if (q->rchild != NULL) Q[++rear] = q->rchild;
	}
}
template <class T>
void BiTree<T>::PostOrder(BiNode<T>* root)
{
	if (root == NULL) return; //递归调用的结束条件 
	else {
		PostOrder(root->lchild); //后序递归遍历 root 的左子树 
		PostOrder(root->rchild);//后序递归遍历 root 的右子树 
		cout << root->data << " ";//访问根结点的数据域 
	}
}
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* root)
{
	if (root == NULL) return; //递归调用的结束条件 
	else {
		cout << root->data << " "; //访问根结点的数据域 
		PreOrder(root->lchild); //前序递归遍历 root 的左子树 
		PreOrder(root->rchild); //前序递归遍历 root 的右子树 
	}
}
template <class T>
void BiTree<T> ::Release(BiNode<T>* root)
{
	if (root != NULL) {
		Release(root->lchild); //释放左子树 
		Release(root->rchild); //释放右子树 
		delete root;
	}
}
template <class T>
void BiTree<T>::InOrder(BiNode<T>* root)//二叉树的中序遍历递归算法InOrder
{
	if (root == NULL) return; //递归调用的结束条件 
	else {
		InOrder(root->lchild); //中序递归遍历 root 的左子树 
		cout << root->data << " "; //访问根结点的数据域 
		InOrder(root->rchild); //中序递归遍历 root 的右子树 
	}
}
int cnt = 0;
template <class T>
void BiTree<T>::PreOrdercnt(BiNode<T>* root)///设计算法按前序次序打印二叉树中的叶子结点;
{
	if (root) {
		if (!root->lchild && !root->rchild)
		{
			cout << root->data << " ";
			cnt++;
		}
		PreOrdercnt(root->lchild);
		PreOrdercnt(root->rchild);
	}
}

int main()
{
	BiTree<char> mytree;
	BiNode<char>* p = new BiNode<char>;
	mytree.CreateBinaryTree(p);
	cout << "前序遍利: ";
	mytree.PreOrder(p);
	cout << endl; cout << "中序遍利: ";
	mytree.InOrder(p); cout << endl; cout << "后序遍利: ";
	mytree.PostOrder(p); cout << endl;
	cout << "层序遍利: ";
	mytree.LeverOrder(p);
	cout << endl; cout << "叶子结点为: ";
	mytree.PreOrdercnt(p); cout << " 个数: ";
	cout << cnt << " "; cout << endl;
	return 0;
}


*/
/*
#include<stdio.h>
#include<stdlib.h>

int Bound(int* nums, int target,int len) {
	int left = 0, right = len - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] < target) {
			left = mid + 1;
		}
		else if (nums[mid] > target) {
			right = mid - 1;
		}
		else if (nums[mid] == target) {
			// 直接返回
			return mid;
		}
	}
	// 直接返回
	return -1;
}

int main() {
	int a[100] = { 0 },p,target,len=0,i=0;
	printf("请输入数组长度：");
	scanf_s("%d", &len);
	while(i!=len)
		scanf_s("%d", &a[i++]);
	printf("请输入需要查找的目标值：");
	scanf_s("%d", &target);
	printf("需要查找的数值下标是：%d",Bound(a, target, len));
	return 0;
}
*/






/*
#include<stdio.h>
#include<stdlib.h>

int Bound(int* nums, int target, int len) {
	int left = 0, right = len - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] < target) {
			left = mid + 1;
		}
		else if (nums[mid] > target) {
			right = mid - 1;
		}
		else if (nums[mid] == target) {
			// 直接返回
			return mid;
		}
	}
	// 直接返回
	return -1;
}

int main() {
	int a[100] = { 0 }, p, target, len = 0, i = 0;
	printf("请输入数组长度：");
	scanf("%d", &len);
	while (i != len)
		scanf("%d", &a[i++]);
	printf("请输入需要查找的目标值：");
	scanf("%d", &target);
	printf("需要查找的数值下标是：%d", Bound(a, target, len));
	return 0;
}
*/






























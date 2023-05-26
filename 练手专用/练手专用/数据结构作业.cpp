
//顺序表
/*
1．设计一个静态数组存储结构的顺序表类，要求编程实现如下任务：建立一个线性表，首先依次输人数据元素1，2，3，…，10，然后删除数据元素6，
最后依次显示当前线性表中的数据元素。要求采用顺序表实现，假设该顺序表的数据元素个数在最坏情况下不会超过10个。
*/

//版本一

/*
#include<iostream>
using namespace std;

const int SIZE = 200;

class List {
public:
	int t.size();	//长度
	int seq[SIZE];
	List();
	List(int n);
	List(int a[],int L);
	//增
	void Add(int val);
	//删
	void Del(int index);
	//改
	void Change(int index,int val);
	//查
	void Find(int index);
	//查看当前长度
	void Count();
	//输出
	void Printf();
};

List::List() {
	t.size() = 0;
}

List::List(int n) {
	t.size() = n;
	for (int i = 0; i < n; i++)
		seq[i] = 0;
}

List::List(int a[],int L) {
	t.size() = L;
	for (int i = 0; i < L; i++)
		seq[i] = a[i];
}

//增
void List::Add(int val) {
	seq[t.size()++] = val;
	cout << "添加数字成功！"<<endl;
}
//删
void List::Del(int index) {
	//把后面的往前覆盖即可
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	for (int i = index -1; i < t.size()-1; i++)
		seq[i] = seq[i + 1];
	t.size()--;
	cout << "删除数字成功！" << endl;
}
//改
void List::Change(int index,int val) {
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	seq[index - 1] = val;
	cout << "修改数字成功！" << endl;
}
//查
void List::Find(int index) {
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	cout << "第" << index << "个元素是" << seq[index - 1];
}
//输出
void List::Printf() {
	for (int i = 0; i < t.size(); i++) {
		cout << seq[i] << " ";
	}
	cout << '\b' << endl << "共有" << t.size() << "个数字" << endl;
}
//查看当前长度
void List::Count() {
	cout << "当前长度是：" << t.size() << endl;
}

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
		a[i] = i + 1;
	List Seq(a, 10);
	Seq.Del(6);
	Seq.Printf();

	return 0;
}

*/

//顺序表-链表实现

/*
.设计一个带头结点的单链表类，要求：

(1)带头结点单链表类的成员函数包括取数据元素个数、插入元素、删除所有值为k的元素、取数据元素。

(2)设计一个测试主函数，实际运行验证所设计循环单链表类的正确性。
*/

/*
#include<iostream>
using namespace std;

const int SIZE = 200;

struct Node {
	int data;
	Node* next;
};

class List {
public:
	Node* head;
	int t.size();	//长度
	List();
	List(int n);
	List(int a[],int L);
	//创造节点
	Node* Create();
	//增
	void Add(int val);
	//删
	void Del(int index);
	//改
	void Change(int index,int val);
	//查
	void Find(int index);
	//查看当前长度
	void Count();
	//输出
	void Printf();
};

Node* List::Create() {
	Node* temp = new Node;
	temp->data = 0;
	temp->next = NULL;
	return temp;
}

List::List() {
	t.size() = 0;
	head = Create();
}

List::List(int n) {
	t.size() = n;
	head = Create();
	Node* temp = head;
	for (int i = 0; i < n; i++) {
		temp->data = 0;
		temp->next = Create();
		temp = temp->next;
	}
}

List::List(int a[],int L) {
	t.size() = L;
	head = Create();
	Node* temp = head;
	for (int i = 0; i < L; i++) {
		temp->data = a[i];
		temp->next = Create();
		temp = temp->next;
	}
}

//增
void List::Add(int val) {
	Node* temp = head;
	while (temp->next)
		temp = temp->next;

	temp->data = val;
	temp->next = Create();
	cout << "添加数字成功！"<<endl;
}
//删
void List::Del(int index) {
	//把后面的往前覆盖即可
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	if (index == 1) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
	int p = index-1;
	Node* temp = head, * s;
	while (--p)temp = temp->next;
	//此时temp是第index-1个
	s = temp->next;
	temp->next = s->next;
	delete s;
	t.size()--;
	cout << "删除数字成功！" << endl;
}
//改
void List::Change(int index,int val) {
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	int p = index-1;
	Node* temp = head;
	while (p--)temp = temp->next;
	//此时temp是第index个
	temp->data = val;
	cout << "修改数字成功！" << endl;
}
//查
void List::Find(int index) {
	if (index > t.size()) {
		cout << "下标越界，无法删除！" << endl;
		return;
	}
	int p = index-1;
	Node* temp = head;
	while (p--)temp = temp->next;

	cout << "第" << index << "个元素是" << temp->data << endl;
}
//输出
void List::Printf() {
	Node* temp = head;
	for (int i = 0; i < t.size(); i++) {
		cout <<temp->data<< " ";
		temp = temp->next;
	}
	cout << '\b' << endl << "共有" << t.size() << "个数字" << endl;
}
//查看当前长度
void List::Count() {
	cout << "当前长度是：" << t.size() << endl;
}

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
		a[i] = i + 1;
	List Seq(a, 10);

	Seq.Del(6);
	Seq.Printf();

	return 0;
}

*/

/*
1. 堆栈类测试和应用问题。要求：
 (1)设计一个主函数实现对顺序堆栈类和链式堆栈类代码进行测试。测试方法为：依次把数据元素1,2,3,4,5入栈，然后出栈堆栈中的数据元素并在屏幕上显示。
(2)定义数据元素的数据类型为如下形式的结构体：
设计一个包含5个数据元素的测试数据，并设计一个主函数实现依次把5个数据元素入栈，然后出栈堆栈中的数据元素并在屏幕上显示。
2. 队列类测试和应用问题。要求：
 设计一个主函数对循环队列类和链式队列类代码进行测试.测试方法为：依次把
1,2,3,4,5入队，然后出队中的数据元素并在屏幕上显示。

*/

//
//#include<iostream>
//using namespace std;
//
//#define SIZE 100
//
//class SeqStack {
//private:
//	int t.size();
//	int Stack[SIZE];
//public:
//	SeqStack();
//	SeqStack(int a[],int n);
//	//入栈
//	void Push(int val);
//	//查看当前长度
//	void Printf();
//	//出栈
//	void Pop();
//};
//
//SeqStack::SeqStack() {
//	t.size() = 0;
//}
//
//SeqStack::SeqStack(int a[],int n) {
//	for (int i = 0; i < n; i++)
//		Stack[i] = a[i];
//	t.size() = n;
//	cout << "实例化成功！" << endl;
//}
//
//
////入栈
//void SeqStack::Push(int val) {
//	Stack[t.size()++] = val;
//	cout << "入栈成功！" << endl;
//}
////查看当前长度
//void SeqStack::Printf() {
//	for (int i = 0; i < t.size(); i++)
//		cout << Stack[i] << " ";
//	cout << endl;
//}
////出栈
//void SeqStack::Pop() {
//	Stack[--t.size()] = 0;
//	cout << "出栈成功！" << endl;
//}
//
//
//
////链表实现
//struct Node {
//	int data;
//	Node* next;
//};
//
//class ListStack {
//private:
//	int t.size();
//	Node* head;
//public:
//	ListStack();
//	ListStack(int a[], int n);
//	//入栈
//	void Push(int val);
//	//查看当前长度
//	void Printf();
//	//出栈
//	void Pop();
//};
//
//Node* Create() {
//	Node* temp = new Node;
//	temp->data = 0;
//	temp->next = NULL;
//	return temp;
//}
//
//ListStack::ListStack() {
//	head = NULL;
//	t.size() = 0;
//}
//
//ListStack::ListStack(int a[], int n) {
//	head = Create();
//	Node* temp = head;
//	for (int i = 0; i < n; i++) {
//		temp->data = a[i];
//		temp->next = Create();
//		temp = temp->next;
//	}
//	t.size() = n;
//	cout << "实例化成功！" << endl;
//}
//
////入栈
//void ListStack::Push(int val) {
//	if (!head) {
//		head = Create();
//		head->data = val;
//	}
//	else {
//		Node* temp = head,*s;
//		while (temp->next)temp = temp->next;
//		s = Create();
//		s->data = val;
//		temp->next = s;
//		cout << "入栈成功！" << endl;
//	}
//
//}
////
//void ListStack::Printf() {	
//
//	Node* temp = head;
//	while (temp) {
//		cout << temp->data<<" ";
//		temp = temp->next;
//	}
//	cout << "输出成功！" << endl;
//}
////出栈
//void ListStack::Pop() {
//	t.size()--;
//	Node* temp = head,*s;
//	while (temp->next)temp = temp->next;
//	delete temp;
//	cout << "出栈成功！" << endl;
//}
//
//
////队列
//class Queue {
//private:
//	int head, tail, a[SIZE];
//public:
//
//	Queue();
//	//入队
//	void Push(int val);
//	//出队
//	void Pop();
//	//输出
//	void Printf();
//	//返回第一个元素
//	void Front();
//	//返回最后一个元素
//	void Back();
//};
//
//Queue::Queue() {
//	head = tail = 0;
//}
//
//void Queue::Push(int val) {
//	a[tail++] = val;
//}
//
//void Queue::Pop() {
//	if (tail > head)
//		head++;
//	else
//		cout << "没有元素了，不能删除哈！"<<endl;
//}
//
//void Queue::Front() {
//	cout <<"队头元素是："<< a[head] << endl;
//}
//
//void Queue::Back() {
//	cout << "队尾元素是：" << a[tail] << endl;
//}
//
//void Queue::Printf() {
//	for (int i = head; i < tail; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
//
//
////循环队列
//struct CirNode {
//	int data;
//	CirNode* per;
//	CirNode* next;
//};
//
//class CirQueue {
//private:
//	CirNode* head;
//	CirNode* tail;
//public:
//	CirQueue();
//	//入队
//	void Push(int val);
//	//出队
//	void Pop();
//	//输出
//	void Printf();
//	//返回第一个元素
//	void Front();
//	//返回最后一个元素
//	void Back();
//};
//
//CirNode* CreateQueue() {
//	CirNode* temp = new CirNode;
//	temp->data = 0;
//	temp->next = NULL;
//	temp->per = NULL;
//	return temp;
//}
//
//CirQueue::CirQueue() {
//	head = CreateQueue();
//	tail = CreateQueue();
//	head=tail;
//}
//
//void CirQueue:: Push(int val) {
//	CirNode* temp = CreateQueue();
//	temp->data=val;
//	temp->per=tail;
//	tail->next = temp;
//	tail = temp;
//}
////出队
//void CirQueue::Pop() {
//	CirNode* temp;
//	temp = head->next;
//	delete head;
//	head = temp;
//	cout << "循环链表出队成功！" << endl;
//}
////输出
//void CirQueue::Printf() {
//	CirNode* temp = head->next;
//	while (temp) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//}
//
////返回第一个元素
//void CirQueue::Front() {
//	CirNode* temp = head->next;
//	cout << temp->data <<endl;
//}
////返回最后一个元素
//void CirQueue::Back() {
//	cout << tail->data << endl;
//}
//
//
//int main() {
//	//顺序表栈
//	cout << "顺序表栈" << endl;
//	SeqStack seqSta;
//	for (int i = 1; i <= 10; i++)
//		seqSta.Push(i);
//	seqSta.Pop();
//	seqSta.Printf();
//	
//
//	//链表栈
//	cout << "链表栈" << endl;
//	ListStack listSta;
//	int k = 10;
//	while (k--)listSta.Push(k);
//	//listSta.Pop();
//	listSta.Printf();
//	
//	//顺序表队列
//	cout << "顺序表队列" << endl;
//	Queue Qu;
//	for (int i = 2; i < 10; i++)
//		Qu.Push(i);
//	Qu.Pop();
//	Qu.Printf();
//
//
//
//	//双向循环队列
//	cout << "双向循环队列" << endl;
//	CirQueue CQ;
//	for (int i = 2; i < 8; i++)
//		CQ.Push(i);
//	cout << "队头元素是：";
//	CQ.Front();//队头元素
//	cout << "队尾元素是：";
//	CQ.Back();
//	CQ.Printf();
//	
//	return 0;
//}


//多维数组


/*1.设计函数建立一个n*n阶的对称矩阵。要求：
（1）实现将对称矩阵用一维数组存储输出。
（2）设计一个测试例子，并编写主程序进行测试。
2.设计并实现一个奇数阶幻方算法，并输出结果。*/

/*
#include<iostream>
#include<vector>
using namespace std;
const int N = 100;
int maze[N][N];

void test(int n) {
	//哈希映射
	vector<int>v(n * n + 10);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			v[i * n + j] = v[j * n + i] = (rand() % 20) + 1;
		}
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << v[s++] << "      ";
		}
		cout << endl;
	}
}

void Huan(int n) {
	memset(maze, 0, sizeof(maze));
	maze[0][n / 2] = 1;
	int mx = n - 1, my = n / 2 + 1, it = 2;
	while (it <= n * n) {
		maze[mx][my] = it++;
		int tx = mx - 1;
		int ty = my + 1;
		if (tx < 0) {
			if (ty >= n) tx = tx + 2, ty = ty - 1;
			else tx = n - 1;
		}
		else {
			if (ty >= n) ty = 0;
		}
		if (maze[tx][ty]) tx = mx + 1, ty = my;
		mx = tx; my = ty;
	}
}
void Print(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout<<maze[i][j]<<" ";
		}
		cout << endl;
	}
}

int main() {
	test(8);
	cout << "以下是幻方" << endl;
	Huan(9);
	Print(9);
	return 0;
}
*/


/*
1．设计实现二叉树类，要求：
（1）编写一个程序，首先建立不带头结点的二叉链式存储结构的二叉树，
然后分别输出按照前序遍历二叉树、中序遍历二叉树和后序遍历二叉树访问各结点的序列信息，最后再测试查找函数和撤销函数的正确性。
（2）实现二叉树层次遍历的非递归算法。
*/

/*
#include<iostream>
#include<malloc.h>
#include<vector>
#include<queue>

using namespace std;
queue<int> v;

struct ListNode {
	int data;
	ListNode* left;
	ListNode* right;
	ListNode(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

void InitList(ListNode* &root) {
	int p;
	cin >> p;
	if (p == 0)root = NULL;
	else {
		root = new ListNode(p);
		InitList(root->left);
		InitList(root->right);
	}
}

//前序
void Traverse1(ListNode* root) {
	if (!root)return;
	cout << root->data << " ";
	Traverse1(root->left);
	Traverse1(root->right);

}
//中序
void Traverse2(ListNode* root) {
	if (!root)return;

	Traverse2(root->left);
	cout << root->data << " ";
	Traverse2(root->right);

}
//后序
void Traverse3(ListNode* root) {
	if (!root)return;

	Traverse3(root->left);

	Traverse3(root->right);
	cout << root->data << " ";
}
//层序遍历
void Traverse4(ListNode* root) {
	queue<ListNode*>q;
	q.push(root);
	while (!q.empty()) {
		ListNode* temp = q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left)
		q.push(temp->left);
		if (temp->right)
		q.push(temp->right);
	}
	cout << endl;
}

int main() {

	ListNode* head = NULL;
	InitList(head);//建造树
	
	cout << "前序结果是：" << endl;
	Traverse1(head);
	cout << endl;
	cout << "中序结果是：" << endl;
	Traverse2(head);
	cout << endl;	
	cout << "后序结果是：" << endl;
	Traverse3(head);
	cout << endl;
	cout << "层序结果是：" << endl;
	Traverse4(head);
	cout << endl;
	return 0;
}
*/


/*
实验六 树和二叉树（二）
 1．设计实现二叉树类，要求：
（1） 假设二叉树采用链式存储结构进行存储，编写一个算法，输出一个二叉树的所有叶子结点，并统计叶子结点个数。
（2）编写求二叉树高度的函数
（3）编写一主函数来验证算法实现
*/

/*
#include<iostream>
#include<malloc.h>
#include<vector>
#include<queue>

using namespace std;
int ans = 0,h=0,i=0;
int a[16] = { 1 ,2, 4,0,0,5,0,0,3,6,0,0,7,0,0 };

struct ListNode {
	int data;
	ListNode* left;
	ListNode* right;
	ListNode(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

void InitList(ListNode*& root) {
	int p=a[i++];
	//cin >> p;
	if (p == 0)root = NULL;
	else {
		root = new ListNode(p);
		InitList(root->left);
		InitList(root->right);
	}
}

//前序
void Traverse1(ListNode* root) {
	if (!root)return;
	cout << root->data << " ";
	Traverse1(root->left);
	Traverse1(root->right);
}
//判断元素个数
void Count(ListNode* root) {
	if (!root)return;
	ans++;
	Count(root->left);
	Count(root->right);
}
//高度
int Hight(ListNode* root) {
	//if (!root)return 0;
	//else {
	//	int h1 = Hight(root->left);
	//	int h2 = Hight(root->right);
	//	return h1 > h2 ? h1 + 1 : h2 + 1;
	//}
	if (!root)return 0;
	
	return max(Hight(root->right),Hight(root->left)) + 1;
}

int main() {

	ListNode* head = NULL;
	InitList(head);//建造树

	cout << "前序结果是：" << endl;
	Traverse1(head);
	Count(head);

	cout << "该二叉树有" << ans << "个节点" << endl;
	cout << "该二叉树高度是：" << Hight(head) << endl;

	return 0;
}
*/

/*
实验七 图
1. 设计邻接表或邻接矩阵图类，实现如下操作：
（1）测试类中的成员函数；
（2）实现拓扑排序算法；
（3）实现最小生成树算法；
（4）实现最短路径算法；
（5）设计主函数，输入数据，测试各算法。
*/


/*
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int N = 1000;
int fa[N], indegree[N];//并查集  入度
int n;
int d[N][N];

struct Node {
	int x, y, w;
	int degree;
	bool operator <(Node& a) {//改变一下排序规则
		return w < a.w;
	}
}edge[N];


int find(int x) {
	return x == fa[x] ? x :fa[x]= find(fa[x]);
}

void TuoPu() {
	queue<Node>q;
	for (int i = 0; i < n; i++)
		if (!edge[i].degree)//如果入度是0，就塞进来
			q.push(edge[i]);
	
	int index = 1;

	while (!q.empty()) {
		queue<Node>q1=q;
		while (!q1.empty()) {
			cout << "第" << index << "层是：";
			Node temp=q1.front();
			q1.pop();
			q.pop();
			cout << temp.x<<" ";
			edge[temp.y].degree--;
			if (edge[temp.y].degree == 0)
				q.push(edge[temp.y]);
		}
		cout << endl;
	}
}

void Kruskal() {
	Node edge1[N]={};
	queue<Node>q;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int x = find(edge[i].x);
		int y = find(edge[i].y);
		if (x == y)continue;
		edge1[i]=edge[i];
		q.push(edge[i]);//塞进来，便于调试
		s++;
	}
	for (int i = 0; i < s; i++) {
		Node temp = q.front();
		q.pop();
		cout << temp.x << " " << temp.y << " " << temp.degree << endl;
	}
		
}

void Floyd(int start, int end) {

	for (int i = 0; i < n; i++)
		d[edge[i].x][edge[i].y] = edge[i].w;

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	cout << start << "到" << end << "的距离是" << d[start][end];
}

int main() {
	cin >> n;//边的个数
	for (int i = 0; i < n; i++) {
		cin >> edge[i].x >> edge[i].y >> edge[i].w;//从i指向y,权重是w
		edge[edge[i].y].degree++;//这里标一下入度
	}
	sort(edge, edge + n);//排序
	//（2）实现拓扑排序算法；
	TuoPu();
	//	（3）实现最小生成树算法；
	Kruskal();
	
	//	（4）实现最短路径算法；
	int start , end;
	cin >> start >> end;
	Floyd(start, end);

	return 0;
}

*/

/*
* 实验八
2. 设计邻接表类，实现无向图的深度优先非递归遍历，广度优先遍历，并设计主函数进行测试；
*/

/*
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
const int N = 100;

vector<vector<int>>Graph(N);
bool visit[N];

void dfs() {
	cout << "dfs:";
	//这里我比较懒，就暂且使用visit数组吧，此时visit数组都是true；所以对于visit的标记咱们要反着来
	stack<int>s;
	s.push(0);
	visit[0] = false;
	while (!s.empty()) {
		int temp = s.top();
		cout << temp << " ";
		s.pop();
		for(auto &i:Graph[temp])
			if (visit[i]) {
				s.push(i);
				visit[i] = false;
			}
	}
}

void bfs() {
	cout << "bfs:";
	queue<int>q;
	q.push(0);
	visit[0] = true;;
	while (!q.empty()) {
		int temp = q.front();
		cout << temp << " ";
		q.pop();
		for (auto& i : Graph[temp]) {
			if (!visit[i]) {
				q.push(i);
				visit[i] = true;
				// cout << i << "被访问过"<<endl;
			}
		}
	}
	cout << endl;
}
//数据:
int main() {
	int a, b,n;
	//cin >> n;
	n = 9;
	int k[9][2] = { {0,1},{0,2},{1,3},{2,3},{2,4},{3,4},{3,5},{4,6},{5,6} };
	for (int i = 0; i < n; i++) {
		//cin >> a >> b;
		a = k[i][0], b = k[i][1];
		Graph[a].push_back(b);
		Graph[b].push_back(a);
	}
	bfs();
	dfs();
	return 0;
}
*/





/*
* /*
* 实验9

*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[8] = {666, 888, 90, -9, 222,998,2,8 };
void test1(int p) {
	for (int i = 0; i < 8; i++)
		if (a[i] == p) {
			cout << "找到，下标是：" << i << endl;
			return;
		}
	cout << "未找到" << endl;
}

void test2(int p) {
	sort(a, a + 8);//排序
	int l = 0, r = 7,mid=0;
	while (l < r) {
		mid = (r - l + 1) / 2;
		if (a[mid] > p)r = mid-1;
		else l = mid;
	}
	if (a[l] == p)cout << "找到" << endl;
	else cout << "未找到" << endl;

}

int main() {
	int n;
	cin >> n;

	test1(n);//顺序查找
	test2(n);//二分查找

	return 0;
}

*/


/*
* 实验10
  输入一组关键字序列分别实现下列排序:

 1.实现简单选择排序、直接插入排序和冒泡排序。

 2.实现希尔排序算法。

 3.实现快速排序算法（取第一个记录或中间记录作为基准记录）。
*/

/*
#include<iostream>
#include<vector>
using namespace std;
const int N = 100;
int n;
vector<int>a;

void Print(vector<int>t) {
	for (int i = 0; i < t.size(); i++)
		cout << t[i] << " ";
	cout << endl;
}

//选择排序
void test1(vector<int>t ) {
	cout << "选择排序：";
	for (int i = 0; i < t.size(); i++) {
		for (int j = i + 1; j < t.size(); j++) {
			if (t[i] > t[j]) {
				int temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	Print(t);
}
//冒泡排序
void test2(vector<int>t ) {
	cout << "冒泡排序：";
	int n = t.size();
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (t[j] > t[j+1]) {
				int temp = t[j];
				t[j] = t[j+1];
				t[j+1] = temp;
			}
		}
	}
	Print(t);
}
//插入排序
void test3(vector<int>t ) {
	cout << "插入排序：";
	int n = t.size();
	for (int i = 0; i < n - 1; i++) {
		int p = i;
		int temp = t[p + 1];
		while (p >= 0) {
			if (temp < t[p]) {
				t[p + 1] = t[p];
				p--;
			}
			else break;
		}
		t[p + 1] = temp;
	}
	Print(t);
}
//希尔排序
void test4(vector<int>t ) {
	cout << "希尔排序：";
	int n = t.size(),len=n;
	while (len > 1) {
		len /= 2;
		for (int i = 0; i < n - len; i++) {
			int p = i;
			int temp = t[p + len];
			while (p >= 0) {
				if (temp < t[p]) {
					t[p + len] = t[p];
					p -= len;
				}
				else break;
			}
			t[p + len] = temp;
		}
	}

	Print(t);
}
//快速排序
void test5(vector<int>&t,int s,int e) {

	if (s > e)return;
	int l = s, r = e;
	int k = s;
	while (s!=e) {
		while (t[e] >= t[k] && s < e)--e;
		while (t[s] <= t[k] && s < e)++s;
		if(e>s)
		swap(t[s], t[e]);
	}
	swap(t[k], t[e]);
	k = e;
	test5(t, l, k - 1);
	test5(t, k + 1, r);
}

int main() {
	//cin >> n;
	n = 9;
	a.resize(n);
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 + 1;
	cout << "该数组未排序前元素是：";
	Print(a );
	test1(a );
	//cout << "调试：";
	//Print(a);
	//system("pause");
	test2(a );
	test3(a );
	test4(a );
	test5(a ,0,n-1);//这里传入引用
	cout << "快速排序：";
	Print(a);
	return 0;
}

*/



/*
人们在日常中经常要查找某个人或某个单位的电话号码，本实验将实现一个简单的个人电话号码查询系统，根据用户输入信息（例如姓名等）进行快速查询。
2、基本要求
（1）在外存上，用文件保存电话号码信息；
（2）在内存中，设计数据结构存储电话信息；
（3）提供查询功能；根据姓名实现快速查询；
（4）提供其他功能，例如插入、删除、修改等；
3、设计思想
由于要管理的电话号码信息很多，而且要在程序运行后仍然保存电话号码信息，所以电话号码信息采用文件的形式存放在外存上。
在系统运行时，要将电话号码信息从文件调入内存来进行查询等操作，为了接收文件中内容，要有一个数据结构与之对应，可以设计如下结构类型的数组来接收数据：
const int max = 10
struct TeleNumber
{
String name;
String phoneNumber;
String mobileNumber;
String email;
} Tele[max];
为了实现对电话号码的快速查询，可以将上述结构数组排序，以便应用折半查找
，但数组中实现插入和删除操作的代价较高。如果记录频繁进行插入或删除操作，可以考虑采用二叉排序数组织电话号码信息，则查询和维护都能获得较高的时间性能；
另外也可以考虑直接使用哈希表表结构存储电话号码信息，请同学根据实际情况自己选择。
*/


/*
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
const int N = 100;

struct TeleNumber
{
	string name;//姓名
	string phoneNumber;//手机号
	// string mobileNumber;
	string email;//电子邮箱
};

vector<TeleNumber>v(N);
int tail = 0;

void menu() {
	cout << "**************欢迎来到阿威小系统^_^************************"<<endl
		<< "**************0.退出系统************************" << endl
		<< "**************1.找人************************" << endl
		<< "**************2.添加人************************" << endl
		<< "**************3.删除人************************" << endl
		<< "**************4.修改************************" << endl
		<< "**************5.显示所有人************************" << endl;

}
void Sort() {//按照姓名进行排序
	for (int i = 0; i < tail; i++) {
		for (int j = i + 1; j < tail; j++) {
			if (v[i].name < v[j].name) {
				swap(v[i], v[j]);
			}
		}
	}
}
void Print(TeleNumber a) {
	cout << "姓名是：" << a.name<<endl
		<< "电话号码是：" << a.phoneNumber<<endl
		<< "电子邮箱是：" << a.email << endl;
}
void Find() {
	string name;
	cout << "请输入人名：";
	cin >> name;
	for (auto& item : v) {
		if (item.name == name) {
			Print(item);
			return;
		}
	}
	cout << "没有找到" << endl;
}
void Add() {
	TeleNumber a;
	cout << "输入人名：";
	cin >> a.name;
	cout << "输入电话号码：";
	cin >> a.phoneNumber;
	cout << "输入邮箱：";
	cin >> a.email;
	v[tail++] = a;
	Sort();
}

void Del() {
	string name;
	cout << "请输入需要删除的名字";
	cin >> name;
	for (int i = 0;i<v.size();i++) {
		if (v[i].name == name) {
			v.erase(v.begin()+i);
		}
	}
	Sort();
}
void Change() {
	string name;
	cout << "请输入需要修改的名字";
	cin >> name;
	int i = 0;
	for (i = 0; i < v.size(); i++) {
		if (v[i].name == name) {
			break;
		}
	}
	cout << "输入电话号码：";
	cin >> v[i].phoneNumber;
	cout << "输入邮箱：";
	cin >> v[i].email;
	
}
void Quit() {
	system("cls");
	printf("欢迎下次使用学生信息管理系统！");
	exit(0);// 结束程序
}

void Show() {
	for (int i=0;i<tail;i++)
		Print(v[i]);
}

int main() {
	menu();
	int choice;
	while (true) {
		cin >> choice;
		switch (choice) {
		case 1:
			Find();
			break;
		case 2:
			Add();
			break;
		case 3:
			Del();
			break;
		case 4:
			Change();
			break;
		case 5:
			Show();
			break;
		case 0:
			Quit();
		default:
			cout << "输入错误，请重新输入" << endl;
		}
	}
	return 0;
}
*/









































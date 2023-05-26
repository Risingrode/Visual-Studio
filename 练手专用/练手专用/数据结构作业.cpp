
//˳���
/*
1�����һ����̬����洢�ṹ��˳����࣬Ҫ����ʵ���������񣺽���һ�����Ա�����������������Ԫ��1��2��3������10��Ȼ��ɾ������Ԫ��6��
���������ʾ��ǰ���Ա��е�����Ԫ�ء�Ҫ�����˳���ʵ�֣������˳��������Ԫ�ظ����������²��ᳬ��10����
*/

//�汾һ

/*
#include<iostream>
using namespace std;

const int SIZE = 200;

class List {
public:
	int t.size();	//����
	int seq[SIZE];
	List();
	List(int n);
	List(int a[],int L);
	//��
	void Add(int val);
	//ɾ
	void Del(int index);
	//��
	void Change(int index,int val);
	//��
	void Find(int index);
	//�鿴��ǰ����
	void Count();
	//���
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

//��
void List::Add(int val) {
	seq[t.size()++] = val;
	cout << "������ֳɹ���"<<endl;
}
//ɾ
void List::Del(int index) {
	//�Ѻ������ǰ���Ǽ���
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
		return;
	}
	for (int i = index -1; i < t.size()-1; i++)
		seq[i] = seq[i + 1];
	t.size()--;
	cout << "ɾ�����ֳɹ���" << endl;
}
//��
void List::Change(int index,int val) {
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
		return;
	}
	seq[index - 1] = val;
	cout << "�޸����ֳɹ���" << endl;
}
//��
void List::Find(int index) {
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
		return;
	}
	cout << "��" << index << "��Ԫ����" << seq[index - 1];
}
//���
void List::Printf() {
	for (int i = 0; i < t.size(); i++) {
		cout << seq[i] << " ";
	}
	cout << '\b' << endl << "����" << t.size() << "������" << endl;
}
//�鿴��ǰ����
void List::Count() {
	cout << "��ǰ�����ǣ�" << t.size() << endl;
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

//˳���-����ʵ��

/*
.���һ����ͷ���ĵ������࣬Ҫ��

(1)��ͷ��㵥������ĳ�Ա��������ȡ����Ԫ�ظ���������Ԫ�ء�ɾ������ֵΪk��Ԫ�ء�ȡ����Ԫ�ء�

(2)���һ��������������ʵ��������֤�����ѭ�������������ȷ�ԡ�
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
	int t.size();	//����
	List();
	List(int n);
	List(int a[],int L);
	//����ڵ�
	Node* Create();
	//��
	void Add(int val);
	//ɾ
	void Del(int index);
	//��
	void Change(int index,int val);
	//��
	void Find(int index);
	//�鿴��ǰ����
	void Count();
	//���
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

//��
void List::Add(int val) {
	Node* temp = head;
	while (temp->next)
		temp = temp->next;

	temp->data = val;
	temp->next = Create();
	cout << "������ֳɹ���"<<endl;
}
//ɾ
void List::Del(int index) {
	//�Ѻ������ǰ���Ǽ���
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
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
	//��ʱtemp�ǵ�index-1��
	s = temp->next;
	temp->next = s->next;
	delete s;
	t.size()--;
	cout << "ɾ�����ֳɹ���" << endl;
}
//��
void List::Change(int index,int val) {
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
		return;
	}
	int p = index-1;
	Node* temp = head;
	while (p--)temp = temp->next;
	//��ʱtemp�ǵ�index��
	temp->data = val;
	cout << "�޸����ֳɹ���" << endl;
}
//��
void List::Find(int index) {
	if (index > t.size()) {
		cout << "�±�Խ�磬�޷�ɾ����" << endl;
		return;
	}
	int p = index-1;
	Node* temp = head;
	while (p--)temp = temp->next;

	cout << "��" << index << "��Ԫ����" << temp->data << endl;
}
//���
void List::Printf() {
	Node* temp = head;
	for (int i = 0; i < t.size(); i++) {
		cout <<temp->data<< " ";
		temp = temp->next;
	}
	cout << '\b' << endl << "����" << t.size() << "������" << endl;
}
//�鿴��ǰ����
void List::Count() {
	cout << "��ǰ�����ǣ�" << t.size() << endl;
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
1. ��ջ����Ժ�Ӧ�����⡣Ҫ��
 (1)���һ��������ʵ�ֶ�˳���ջ�����ʽ��ջ�������в��ԡ����Է���Ϊ�����ΰ�����Ԫ��1,2,3,4,5��ջ��Ȼ���ջ��ջ�е�����Ԫ�ز�����Ļ����ʾ��
(2)��������Ԫ�ص���������Ϊ������ʽ�Ľṹ�壺
���һ������5������Ԫ�صĲ������ݣ������һ��������ʵ�����ΰ�5������Ԫ����ջ��Ȼ���ջ��ջ�е�����Ԫ�ز�����Ļ����ʾ��
2. ��������Ժ�Ӧ�����⡣Ҫ��
 ���һ����������ѭ�����������ʽ�����������в���.���Է���Ϊ�����ΰ�
1,2,3,4,5��ӣ�Ȼ������е�����Ԫ�ز�����Ļ����ʾ��

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
//	//��ջ
//	void Push(int val);
//	//�鿴��ǰ����
//	void Printf();
//	//��ջ
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
//	cout << "ʵ�����ɹ���" << endl;
//}
//
//
////��ջ
//void SeqStack::Push(int val) {
//	Stack[t.size()++] = val;
//	cout << "��ջ�ɹ���" << endl;
//}
////�鿴��ǰ����
//void SeqStack::Printf() {
//	for (int i = 0; i < t.size(); i++)
//		cout << Stack[i] << " ";
//	cout << endl;
//}
////��ջ
//void SeqStack::Pop() {
//	Stack[--t.size()] = 0;
//	cout << "��ջ�ɹ���" << endl;
//}
//
//
//
////����ʵ��
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
//	//��ջ
//	void Push(int val);
//	//�鿴��ǰ����
//	void Printf();
//	//��ջ
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
//	cout << "ʵ�����ɹ���" << endl;
//}
//
////��ջ
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
//		cout << "��ջ�ɹ���" << endl;
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
//	cout << "����ɹ���" << endl;
//}
////��ջ
//void ListStack::Pop() {
//	t.size()--;
//	Node* temp = head,*s;
//	while (temp->next)temp = temp->next;
//	delete temp;
//	cout << "��ջ�ɹ���" << endl;
//}
//
//
////����
//class Queue {
//private:
//	int head, tail, a[SIZE];
//public:
//
//	Queue();
//	//���
//	void Push(int val);
//	//����
//	void Pop();
//	//���
//	void Printf();
//	//���ص�һ��Ԫ��
//	void Front();
//	//�������һ��Ԫ��
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
//		cout << "û��Ԫ���ˣ�����ɾ������"<<endl;
//}
//
//void Queue::Front() {
//	cout <<"��ͷԪ���ǣ�"<< a[head] << endl;
//}
//
//void Queue::Back() {
//	cout << "��βԪ���ǣ�" << a[tail] << endl;
//}
//
//void Queue::Printf() {
//	for (int i = head; i < tail; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
//
//
////ѭ������
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
//	//���
//	void Push(int val);
//	//����
//	void Pop();
//	//���
//	void Printf();
//	//���ص�һ��Ԫ��
//	void Front();
//	//�������һ��Ԫ��
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
////����
//void CirQueue::Pop() {
//	CirNode* temp;
//	temp = head->next;
//	delete head;
//	head = temp;
//	cout << "ѭ��������ӳɹ���" << endl;
//}
////���
//void CirQueue::Printf() {
//	CirNode* temp = head->next;
//	while (temp) {
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//}
//
////���ص�һ��Ԫ��
//void CirQueue::Front() {
//	CirNode* temp = head->next;
//	cout << temp->data <<endl;
//}
////�������һ��Ԫ��
//void CirQueue::Back() {
//	cout << tail->data << endl;
//}
//
//
//int main() {
//	//˳���ջ
//	cout << "˳���ջ" << endl;
//	SeqStack seqSta;
//	for (int i = 1; i <= 10; i++)
//		seqSta.Push(i);
//	seqSta.Pop();
//	seqSta.Printf();
//	
//
//	//����ջ
//	cout << "����ջ" << endl;
//	ListStack listSta;
//	int k = 10;
//	while (k--)listSta.Push(k);
//	//listSta.Pop();
//	listSta.Printf();
//	
//	//˳������
//	cout << "˳������" << endl;
//	Queue Qu;
//	for (int i = 2; i < 10; i++)
//		Qu.Push(i);
//	Qu.Pop();
//	Qu.Printf();
//
//
//
//	//˫��ѭ������
//	cout << "˫��ѭ������" << endl;
//	CirQueue CQ;
//	for (int i = 2; i < 8; i++)
//		CQ.Push(i);
//	cout << "��ͷԪ���ǣ�";
//	CQ.Front();//��ͷԪ��
//	cout << "��βԪ���ǣ�";
//	CQ.Back();
//	CQ.Printf();
//	
//	return 0;
//}


//��ά����


/*1.��ƺ�������һ��n*n�׵ĶԳƾ���Ҫ��
��1��ʵ�ֽ��Գƾ�����һά����洢�����
��2�����һ���������ӣ�����д��������в��ԡ�
2.��Ʋ�ʵ��һ�������׻÷��㷨������������*/

/*
#include<iostream>
#include<vector>
using namespace std;
const int N = 100;
int maze[N][N];

void test(int n) {
	//��ϣӳ��
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
	cout << "�����ǻ÷�" << endl;
	Huan(9);
	Print(9);
	return 0;
}
*/


/*
1�����ʵ�ֶ������࣬Ҫ��
��1����дһ���������Ƚ�������ͷ���Ķ�����ʽ�洢�ṹ�Ķ�������
Ȼ��ֱ��������ǰ���������������������������ͺ���������������ʸ�����������Ϣ������ٲ��Բ��Һ����ͳ�����������ȷ�ԡ�
��2��ʵ�ֶ�������α����ķǵݹ��㷨��
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

//ǰ��
void Traverse1(ListNode* root) {
	if (!root)return;
	cout << root->data << " ";
	Traverse1(root->left);
	Traverse1(root->right);

}
//����
void Traverse2(ListNode* root) {
	if (!root)return;

	Traverse2(root->left);
	cout << root->data << " ";
	Traverse2(root->right);

}
//����
void Traverse3(ListNode* root) {
	if (!root)return;

	Traverse3(root->left);

	Traverse3(root->right);
	cout << root->data << " ";
}
//�������
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
	InitList(head);//������
	
	cout << "ǰ�����ǣ�" << endl;
	Traverse1(head);
	cout << endl;
	cout << "�������ǣ�" << endl;
	Traverse2(head);
	cout << endl;	
	cout << "�������ǣ�" << endl;
	Traverse3(head);
	cout << endl;
	cout << "�������ǣ�" << endl;
	Traverse4(head);
	cout << endl;
	return 0;
}
*/


/*
ʵ���� ���Ͷ�����������
 1�����ʵ�ֶ������࣬Ҫ��
��1�� ���������������ʽ�洢�ṹ���д洢����дһ���㷨�����һ��������������Ҷ�ӽ�㣬��ͳ��Ҷ�ӽ�������
��2����д��������߶ȵĺ���
��3����дһ����������֤�㷨ʵ��
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

//ǰ��
void Traverse1(ListNode* root) {
	if (!root)return;
	cout << root->data << " ";
	Traverse1(root->left);
	Traverse1(root->right);
}
//�ж�Ԫ�ظ���
void Count(ListNode* root) {
	if (!root)return;
	ans++;
	Count(root->left);
	Count(root->right);
}
//�߶�
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
	InitList(head);//������

	cout << "ǰ�����ǣ�" << endl;
	Traverse1(head);
	Count(head);

	cout << "�ö�������" << ans << "���ڵ�" << endl;
	cout << "�ö������߶��ǣ�" << Hight(head) << endl;

	return 0;
}
*/

/*
ʵ���� ͼ
1. ����ڽӱ���ڽӾ���ͼ�࣬ʵ�����²�����
��1���������еĳ�Ա������
��2��ʵ�����������㷨��
��3��ʵ����С�������㷨��
��4��ʵ�����·���㷨��
��5��������������������ݣ����Ը��㷨��
*/


/*
#include<iostream>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int N = 1000;
int fa[N], indegree[N];//���鼯  ���
int n;
int d[N][N];

struct Node {
	int x, y, w;
	int degree;
	bool operator <(Node& a) {//�ı�һ���������
		return w < a.w;
	}
}edge[N];


int find(int x) {
	return x == fa[x] ? x :fa[x]= find(fa[x]);
}

void TuoPu() {
	queue<Node>q;
	for (int i = 0; i < n; i++)
		if (!edge[i].degree)//��������0����������
			q.push(edge[i]);
	
	int index = 1;

	while (!q.empty()) {
		queue<Node>q1=q;
		while (!q1.empty()) {
			cout << "��" << index << "���ǣ�";
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
		q.push(edge[i]);//�����������ڵ���
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
	cout << start << "��" << end << "�ľ�����" << d[start][end];
}

int main() {
	cin >> n;//�ߵĸ���
	for (int i = 0; i < n; i++) {
		cin >> edge[i].x >> edge[i].y >> edge[i].w;//��iָ��y,Ȩ����w
		edge[edge[i].y].degree++;//�����һ�����
	}
	sort(edge, edge + n);//����
	//��2��ʵ�����������㷨��
	TuoPu();
	//	��3��ʵ����С�������㷨��
	Kruskal();
	
	//	��4��ʵ�����·���㷨��
	int start , end;
	cin >> start >> end;
	Floyd(start, end);

	return 0;
}

*/

/*
* ʵ���
2. ����ڽӱ��࣬ʵ������ͼ��������ȷǵݹ������������ȱ�������������������в��ԣ�
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
	//�����ұȽ�����������ʹ��visit����ɣ���ʱvisit���鶼��true�����Զ���visit�ı������Ҫ������
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
				// cout << i << "�����ʹ�"<<endl;
			}
		}
	}
	cout << endl;
}
//����:
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
* ʵ��9

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
			cout << "�ҵ����±��ǣ�" << i << endl;
			return;
		}
	cout << "δ�ҵ�" << endl;
}

void test2(int p) {
	sort(a, a + 8);//����
	int l = 0, r = 7,mid=0;
	while (l < r) {
		mid = (r - l + 1) / 2;
		if (a[mid] > p)r = mid-1;
		else l = mid;
	}
	if (a[l] == p)cout << "�ҵ�" << endl;
	else cout << "δ�ҵ�" << endl;

}

int main() {
	int n;
	cin >> n;

	test1(n);//˳�����
	test2(n);//���ֲ���

	return 0;
}

*/


/*
* ʵ��10
  ����һ��ؼ������зֱ�ʵ����������:

 1.ʵ�ּ�ѡ������ֱ�Ӳ��������ð������

 2.ʵ��ϣ�������㷨��

 3.ʵ�ֿ��������㷨��ȡ��һ����¼���м��¼��Ϊ��׼��¼����
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

//ѡ������
void test1(vector<int>t ) {
	cout << "ѡ������";
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
//ð������
void test2(vector<int>t ) {
	cout << "ð������";
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
//��������
void test3(vector<int>t ) {
	cout << "��������";
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
//ϣ������
void test4(vector<int>t ) {
	cout << "ϣ������";
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
//��������
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
	cout << "������δ����ǰԪ���ǣ�";
	Print(a );
	test1(a );
	//cout << "���ԣ�";
	//Print(a);
	//system("pause");
	test2(a );
	test3(a );
	test4(a );
	test5(a ,0,n-1);//���ﴫ������
	cout << "��������";
	Print(a);
	return 0;
}

*/



/*
�������ճ��о���Ҫ����ĳ���˻�ĳ����λ�ĵ绰���룬��ʵ�齫ʵ��һ���򵥵ĸ��˵绰�����ѯϵͳ�������û�������Ϣ�����������ȣ����п��ٲ�ѯ��
2������Ҫ��
��1��������ϣ����ļ�����绰������Ϣ��
��2�����ڴ��У�������ݽṹ�洢�绰��Ϣ��
��3���ṩ��ѯ���ܣ���������ʵ�ֿ��ٲ�ѯ��
��4���ṩ�������ܣ�������롢ɾ�����޸ĵȣ�
3�����˼��
����Ҫ����ĵ绰������Ϣ�ܶ࣬����Ҫ�ڳ������к���Ȼ����绰������Ϣ�����Ե绰������Ϣ�����ļ�����ʽ���������ϡ�
��ϵͳ����ʱ��Ҫ���绰������Ϣ���ļ������ڴ������в�ѯ�Ȳ�����Ϊ�˽����ļ������ݣ�Ҫ��һ�����ݽṹ��֮��Ӧ������������½ṹ���͵��������������ݣ�
const int max = 10
struct TeleNumber
{
String name;
String phoneNumber;
String mobileNumber;
String email;
} Tele[max];
Ϊ��ʵ�ֶԵ绰����Ŀ��ٲ�ѯ�����Խ������ṹ���������Ա�Ӧ���۰����
����������ʵ�ֲ����ɾ�������Ĵ��۽ϸߡ������¼Ƶ�����в����ɾ�����������Կ��ǲ��ö�����������֯�绰������Ϣ�����ѯ��ά�����ܻ�ýϸߵ�ʱ�����ܣ�
����Ҳ���Կ���ֱ��ʹ�ù�ϣ���ṹ�洢�绰������Ϣ����ͬѧ����ʵ������Լ�ѡ��
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
	string name;//����
	string phoneNumber;//�ֻ���
	// string mobileNumber;
	string email;//��������
};

vector<TeleNumber>v(N);
int tail = 0;

void menu() {
	cout << "**************��ӭ��������Сϵͳ^_^************************"<<endl
		<< "**************0.�˳�ϵͳ************************" << endl
		<< "**************1.����************************" << endl
		<< "**************2.�����************************" << endl
		<< "**************3.ɾ����************************" << endl
		<< "**************4.�޸�************************" << endl
		<< "**************5.��ʾ������************************" << endl;

}
void Sort() {//����������������
	for (int i = 0; i < tail; i++) {
		for (int j = i + 1; j < tail; j++) {
			if (v[i].name < v[j].name) {
				swap(v[i], v[j]);
			}
		}
	}
}
void Print(TeleNumber a) {
	cout << "�����ǣ�" << a.name<<endl
		<< "�绰�����ǣ�" << a.phoneNumber<<endl
		<< "���������ǣ�" << a.email << endl;
}
void Find() {
	string name;
	cout << "������������";
	cin >> name;
	for (auto& item : v) {
		if (item.name == name) {
			Print(item);
			return;
		}
	}
	cout << "û���ҵ�" << endl;
}
void Add() {
	TeleNumber a;
	cout << "����������";
	cin >> a.name;
	cout << "����绰���룺";
	cin >> a.phoneNumber;
	cout << "�������䣺";
	cin >> a.email;
	v[tail++] = a;
	Sort();
}

void Del() {
	string name;
	cout << "��������Ҫɾ��������";
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
	cout << "��������Ҫ�޸ĵ�����";
	cin >> name;
	int i = 0;
	for (i = 0; i < v.size(); i++) {
		if (v[i].name == name) {
			break;
		}
	}
	cout << "����绰���룺";
	cin >> v[i].phoneNumber;
	cout << "�������䣺";
	cin >> v[i].email;
	
}
void Quit() {
	system("cls");
	printf("��ӭ�´�ʹ��ѧ����Ϣ����ϵͳ��");
	exit(0);// ��������
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
			cout << "�����������������" << endl;
		}
	}
	return 0;
}
*/









































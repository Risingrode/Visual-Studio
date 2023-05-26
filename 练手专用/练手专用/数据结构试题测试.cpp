//#include<iostream>
//#include<string>
//using namespace std;
//
//int i = 1;
//void Print(int* arr, int n) {
//	cout << "��" << i << "�α���:" << endl;
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//	i++;
//}
//
//void ShellSort(int* arr, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		//ÿ�ζ�gap�۰����
//		gap = gap / 2;
//		//��������
//		for (int i = 0; i < n - gap; ++i)
//		{
//			int end = i;
//			int tem = arr[end + gap];
//			while (end >= 0)
//			{
//				if (tem < arr[end])
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tem;
//		}
//		Print(arr,n);
//	}
//}
//
//
//template <class T>
//struct Binnode
//{
//	T data;
//	Binnode<T>* prior, * next;
//};
//template <class T>
//bool  Unknown(Binnode<T>* first)
//{
//	Binnode<T>* p, * q;
//	p = first->next;  q = first->prior;
//	while (p != q && p->prior != q)
//		if (p->data == q->data)
//		{
//			p = p->next;  q = q->prior;
//		}
//		else 
//			return 0;
//	return 1;
//}
//
///*
//template <class T>
//LinkList<T>::LinkList(int n)
//{
//	first = new Node<T>;
//	Node<T>* s; T  x;
//	first->next = NULL;;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		s = new Node<T>;
//
//		s->data = x;
//		s->next = first->next; //�����ǰ�NULL��ֵ��s->next
//		first->next = s;
//	}
//
//}
//
//template <class T>
//void BiTree<T>::Unknown(BiNode<T>* root)
//{
//	const int MaxSize = 100;
//	int front = 0;   int rear = 0;
//	BiNode<T>* Q[MaxSize];   BiNode<T>* q;
//	if (root == NULL) return;
//	else {
//		Q[rear++] = root;
//		while (front != rear)
//		{
//			q = Q[front++];     cout << q->data << " ";
//			if (q->lchild != NULL)    Q[rear++] = q->lchild;
//			if (q->rchild != NULL)    Q[rear++] = q->rchild;
//		}
//	}
//}
//
//template <class T>
//void Linklist::purge(Node<T>& L��int min��int max)��
//{
//	Node* p, * q;
//	p = L->next;
//	while (p->next)
//		if (p->data > min && p->data < max)
//		{
//			q = p->next;
//			p->next = q->next;
//			delete q;
//		}
//		else p = p->next;
//}
//*/
//
///*
//int dengcha(Node<T>* L) {
//	Node* p, *q;
//	p = L;
//	int len = 0;
//	while (p && p->next) {
//		len++;
//		p = p->next;
//	}
//	len -= 2;
//	q= L;
//	while (len--) {
//		s = q->next;
//		if (s->next->data - s->data != s->data - q->data)
//			return 0;
//	}
//	return 1;
//}
//
//*/
//
//void Quick_Sort(int* arr, int begin, int end) {
//	if (begin > end)
//		return;
//	int tmp = arr[begin];
//	int i = begin;
//	int j = end;
//	while (i != j) {
//		while (arr[j] >= tmp && j > i)
//			j--;
//		while (arr[i] <= tmp && j > i)
//			i++;
//		if (j > i) {
//			int t = arr[i];
//			arr[i] = arr[j];
//			arr[j] = t;
//		}
//	}
//	arr[begin] = arr[i];
//	arr[i] = tmp;
//	Print(arr, 8);
//	Quick_Sort(arr, begin, i - 1);
//	Quick_Sort(arr, i + 1, end);
//}
///*
//template <class T>
//void ALGraph<T>::TopSort()
//{
//	int top = -1;
//	int count = 0; //����˳��ջ S ����ʼ�����ۼ�����ʼ���� 
//	for (int i = 0; i < vertexNum; i++) //ɨ�趥��������Ϊ 0 �Ķ���ѹջ�� 
//		if (adjlist[i].in == 0)
//			S[++top] = i;
//	while (top != -1) //��ͼ�л������Ϊ 0 �Ķ���ʱѭ�� 
//	{
//		int j = S[top--]; //��ջ��ȡ��һ�����Ϊ 0 �Ķ��� 
//		cout << adjlist[j].vertex;
//		count++;
//		ArcNode* p = adjlist[j].firstedge; //ɨ�趥����ҳ����� j �����г��� 
//		while (p != NULL)
//		{
//			int k = p->adjvex;
//			adjlist[k].in--; //����ȼ� 1�����Ϊ 0���򽫸ö�����ջ 
//			if (adjlist[k].in == 0) S[++top] = k;
//			p = p->next;
//		}
//	}
//	if (count < vertexNum) cout << "�л�·";
//}
//
//template <class T>
//void ALGraph<T>::BFSTraverse(int v)
//{
//	int front = rear = -1; //��ʼ������, ������в���˳��洢�Ҳ��ᷢ�����
//	int Q[100] = { 0 };
//
//	cout << adjlist[v].vertex;
//	visited[v] = 1;
//	Q[++rear] = v; //�����ʶ������ 
//	while (front != rear)
//	{
//		v = Q[++front];
//		p = adjlist[v].firstarc; //�߱��еĹ���ָ�� p ��ʼ�� 
//		while (p)
//		{
//			j = p->adjvex;
//			if (visited[j] == 0)
//			{
//				cout << adjlist[j].vertex; visited[j] = 1; Q[++rear] = j;
//			}
//			p = p->next;
//		}
//	}
//}
//*/
//
//void test(int* next, const string& b) {
//	//���ַ���0��ʼ
//	next[0] = 0;
//	int j = 0;
//	for (int i = 1; i < b.size(); i++) {
//		while (j > 0 && b[i] != b[j])
//			j = next[j - 1];
//		if (b[i] == b[j])
//			j++;
//		next[i] = j;
//	}
//
//	for (int i = 0; i < 12; i++)
//		cout << next[i];
//}
//
//
//int main() {
//	int arr[] = { 36,48,25,55,80,17,11,72,67,8 };
//	//Print(arr, 10);
//	//ShellSort(arr, 10);
//	int p[] = { 46,58,15,45,90,18,10,62 };
//	//Quick_Sort(p, 0, 7);
//	string c = "abaabcaabab";
//	int next[15] = { 0 };
//	test(next, c);
//
//	return 0;
//}
//
//
//
//


































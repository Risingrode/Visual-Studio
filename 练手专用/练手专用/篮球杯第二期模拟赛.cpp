/*
1.2048 2.26390 3.1038 4.592 5.32
*/






/*
С�����ڿ���һ���ļ����������Ѿ������� t ��ʱ�䣬�Ѿ������� c �ֽڣ�
�ļ��ܹ��� s �ֽڣ�������������ٽ��еģ�����С����Ż���Ҫ���������룿
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
��С���� n �����ʣ����ǵ�������һЩ���ظ��ģ����С��ȥ���ظ��ĵ��ʡ�
�����ʽ
���������һ�а���һ�������� n ����ʾС���ĵ���������
���������� n �У�ÿ�а���һ����Сд��ĸ��ɵĵ��ʡ�
�����ʽ
���������ȥ���ظ������Щ���ʡ����һ�����ʳ����˶�飬�뱣����һ�γ��ֵĵ��ʣ�ȥ��֮����ֵĵ��ʣ��������˳�������
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
����һ����ĸ����һ�� X ͼ�������ĵ�������ĵ����ĸ�45��б�߷���������ֱ�߶���ɣ�
�����߶εĳ�����ͬ�����������߶��ϵ���ĸ�����ĵ����ĸ��ͬ��
����һ�� Xͼ�ο���ʹ���������� r, c, L ������������ r, c ��ʾ���ĵ�λ�ڵ� r �е� c �У�
  ������ L ��ʾ������ֱ�߶εĳ��ȡ� ���� 1 �� L ֮���ÿ������ i��Xͼ�����㣺�� r-i �е� c-i ����� r �е� c ����ͬ��
  �� r-i �е� c+i ����� r �е� c ����ͬ���� r+i �е� c-i ����� r �е� c ����ͬ���� r+i �е� c+i ����� r �е� c ����ͬ��
�������磬�����������ĸ�����У����е���ĸ L ���һ�� Xͼ�Σ������м�� 5 �� L Ҳ���һ�� Xͼ�Ρ�������ĸ Q �����һ�� Xͼ�Ρ�
����LAAALA
����ALQLQA
����AALQAA
����ALQLQA
����LAAALA

 �����ʽ
���������һ�а����������� n, m���ֱ��ʾ��ĸ�����������������
���������� n �У�ÿ�� m ����д��ĸ��Ϊ�����ľ���
�����ʽ
�������һ�У�����һ����������ʾ�𰸡�
*/

/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n, m;
const int N = 200;
vector<string>g(N);
//���� ���� ���� ����
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
	BiTree(); //���캯������ʼ��һ�ÿյĶ����� 
	~BiTree()//�����������������㷨 BiTree 
	{
		Release(root);
	}
	void InOrder() { InOrder(root); } //������������� 
	void PreOrder() { PreOrder(root); }
	void PostOrder() { PostOrder(root); } //������������� 
	void LeverOrder() { LeverOrder(root); } //������������� 
	void Count() { Count(root); }
	void PreOrdercnt() { PreOrdercnt(root); }
	int Depth() { int www = Depth(root); return www; }
	BiNode<T>* root; //ָ�������ͷָ�� 
	
	void PreOrder(BiNode<T>* root); //ǰ����������� 
	void InOrder(BiNode<T>* root);
	void PostOrder(BiNode<T>* root);
	void LeverOrder(BiNode<T>* root); //������������� 
	void Release(BiNode<T>* root); //������������ 
	void Count(BiNode<T>* root);/////��������Ľ����� 
	void PreOrdercnt(BiNode<T>* root);///����㷨��ǰ������ӡ�������е�Ҷ�ӽ��;
	int Depth(BiNode<T>* root);//��ȣ� 
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
	//�ݹ����ֹ�������������#�Ŵ�����ָ�룬˵����ǰ�ڵ��������Ѵ������
	if (ch == '#')
		T = NULL;
	else {
		T = (BiNode<char>*)malloc(sizeof(BiNode<char>*));
		T->data = ch;
		//�������������֮�󣬲Ż�ȥ��������������������������ͬʱ����
		CreateBinaryTree(T->lchild);
		CreateBinaryTree(T->rchild);
	}
}


template <class T>
void BiTree<T>::LeverOrder(BiNode<T>* root)
{
	BiNode<T>* Q[100];
	int front = 0, rear = 0; //����˳����У����ٶ����ᷢ������ 
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
	if (root == NULL) return; //�ݹ���õĽ������� 
	else {
		PostOrder(root->lchild); //����ݹ���� root �������� 
		PostOrder(root->rchild);//����ݹ���� root �������� 
		cout << root->data << " ";//���ʸ����������� 
	}
}
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* root)
{
	if (root == NULL) return; //�ݹ���õĽ������� 
	else {
		cout << root->data << " "; //���ʸ����������� 
		PreOrder(root->lchild); //ǰ��ݹ���� root �������� 
		PreOrder(root->rchild); //ǰ��ݹ���� root �������� 
	}
}
template <class T>
void BiTree<T> ::Release(BiNode<T>* root)
{
	if (root != NULL) {
		Release(root->lchild); //�ͷ������� 
		Release(root->rchild); //�ͷ������� 
		delete root;
	}
}
template <class T>
void BiTree<T>::InOrder(BiNode<T>* root)//����������������ݹ��㷨InOrder
{
	if (root == NULL) return; //�ݹ���õĽ������� 
	else {
		InOrder(root->lchild); //����ݹ���� root �������� 
		cout << root->data << " "; //���ʸ����������� 
		InOrder(root->rchild); //����ݹ���� root �������� 
	}
}
int cnt = 0;
template <class T>
void BiTree<T>::PreOrdercnt(BiNode<T>* root)///����㷨��ǰ������ӡ�������е�Ҷ�ӽ��;
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
	cout << "ǰ�����: ";
	mytree.PreOrder(p);
	cout << endl; cout << "�������: ";
	mytree.InOrder(p); cout << endl; cout << "�������: ";
	mytree.PostOrder(p); cout << endl;
	cout << "�������: ";
	mytree.LeverOrder(p);
	cout << endl; cout << "Ҷ�ӽ��Ϊ: ";
	mytree.PreOrdercnt(p); cout << " ����: ";
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
			// ֱ�ӷ���
			return mid;
		}
	}
	// ֱ�ӷ���
	return -1;
}

int main() {
	int a[100] = { 0 },p,target,len=0,i=0;
	printf("���������鳤�ȣ�");
	scanf_s("%d", &len);
	while(i!=len)
		scanf_s("%d", &a[i++]);
	printf("��������Ҫ���ҵ�Ŀ��ֵ��");
	scanf_s("%d", &target);
	printf("��Ҫ���ҵ���ֵ�±��ǣ�%d",Bound(a, target, len));
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
			// ֱ�ӷ���
			return mid;
		}
	}
	// ֱ�ӷ���
	return -1;
}

int main() {
	int a[100] = { 0 }, p, target, len = 0, i = 0;
	printf("���������鳤�ȣ�");
	scanf("%d", &len);
	while (i != len)
		scanf("%d", &a[i++]);
	printf("��������Ҫ���ҵ�Ŀ��ֵ��");
	scanf("%d", &target);
	printf("��Ҫ���ҵ���ֵ�±��ǣ�%d", Bound(a, target, len));
	return 0;
}
*/






























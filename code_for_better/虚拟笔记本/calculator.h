#include<iostream>

using namespace std;

char in[51] = { '\0' }, out[51] = { '\0' }, c;
typedef struct Node {
	int data;
	char str;
	struct Node* next;
}*linkstack;
typedef struct Lkstack {
	struct Node* top;
	int length;
}*Lstack;
void initstack(Lstack s) {
	s->top = NULL;
	s->length = 0;
	return;
}
void Pushc(Lstack s, char e) {
	linkstack l = new Node;
	l->str = e;
	l->next = s->top;
	s->top = l;//���µĽڵ�l����ջ��ָ��
	s->length++;
	return;
}
void Popc(Lstack s, char* e) {
	if (s->length == 0) return;
	*e = s->top->str;
	s->top = s->top->next;
	s->length--;
}
void Pushn(Lstack s, int e) {
	linkstack l = new Node;
	l->data = e;
	l->next = s->top;
	s->top = l;//���µĽڵ�l����ջ��ָ��
	s->length++;
	return;
}
void Popn(Lstack s, int* e) {
	if (s->length == 0) return;
	*e = s->top->data;
	s->top = s->top->next;
	s->length--;
}
int lenstack(Lstack s) {
	return s->length;
}
void change(Lstack s) {
	int j = 0;
	/*��׺���ʽת��׺���ʽ��
	�����ұ�����׺���ʽ��
	�������־����������Ϊ��׺���ʽ��һ���֣�
	���Ƿ��ţ����ж�����ջ�����ŵ����ȼ���
	���������Ż����ȼ�������ջ��������ջ��Ԫ�����γ�ջ�������������ǰ������ջ*/
	for (int i = 0; in[i] != '\0'; i++) {
		while (isdigit(in[i]))//�жϸ��ַ��Ǻ�������
		{/*���������ַ���ֱ�������ֱ����һλ���������ַ���ӡ�ո�����ѭ�� */
			out[j++] = in[i];
			i++;
			if (!isdigit(in[i]) && in[i] != '\0') {
				out[j++] = ' ';
			}
		}
		if (in[i] == '\0') break;
		if (in[i] < 48 || in[i]>57) {//����
			if (in[i] == '+' || in[i] == '-') {//�Ӽ�������õ����ȼ����
				if (!lenstack(s)) Pushc(s, in[i]);//ջ��Ϊ�գ�ֱ����ջ
				else {
					while (lenstack(s)) {
						Popc(s, &c);
						if (c != '(') {
							out[j++] = c;
							out[j++] = ' ';
						}
						else {
							Pushc(s, c);
							break;
						}
					}
					Pushc(s, in[i]);
				}
			}
			else {
				if (in[i] == ')') {
					Popc(s, &c);
					while (c != '(') {
						out[j++] = c;
						out[j++] = ' ';
						Popc(s, &c);
					}
				}
				else {//�ˡ����������Ŷ������ȼ��ߵģ�ֱ����ջ
					Pushc(s, in[i]);
				}
			}
		}
	}
	out[j++] = ' ';
	while (lenstack(s)) {
		Popc(s, &c);
		out[j++] = c;
	}
}
void AIexpre(Lstack s, int* e) {
	int num = -1, a, b;
	for (int i = 0; out[i] != '\0'; i++) {
		while (isdigit(out[i])) {  //��������
			if (num == -1) num = 0, num = out[i++] - '0';
			else num = num * 10 + out[i++] - '0';
			if (out[i] == ' ' && num != -1)
			{
				Pushn(s, num); //��ת����������ѹջ
				num = -1;
				break;
			}
		}
		switch (out[i]) {
		case '+':
			Popn(s, &a);
			Popn(s, &b);
			Pushn(s, a + b);
			break;
		case '-':
			Popn(s, &a);
			Popn(s, &b);
			Pushn(s, b - a);
			break;
		case '*':
			Popn(s, &a);
			Popn(s, &b);
			Pushn(s, b * a);
			break;
		case '/':
			Popn(s, &a);
			Popn(s, &b);
			Pushn(s, b / a);
			break;
		}
	}
	Popn(s, e);
}
int calculator(char name[]) {
	int j = 0, ans;
	Lstack s = new Lkstack;
	initstack(s);//in������׺���ʽ  out����ź�׺���ʽ�ķ���
	for (int i = 0; name[i] != '\0'; i++) in[i] = name[i];
	change(s);//��׺ת��׺���ʽ
	AIexpre(s, &ans);//������
	return ans;
}
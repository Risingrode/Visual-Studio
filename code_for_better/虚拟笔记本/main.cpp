#include "map.h"
#include<iostream>
using namespace std;

//extern int if_password;


void key_num() {
	int ch = 0;
	while (1) {
		ch = _getch();
		if (ch == 8) return;
		else cout << ch << endl;
	}
	return;
}


int main() {
	system("@color 2");
	init_shell(1, 1);//������ѡ�����ֱ���� 1.�Ƿ��ӡʹ��ǰ��ʾ 2.
	//print_password();
	while (1) {
		if (!move(1, 1, 1)) {
			gotoxy(0, 40);
			return 1;
		}
	}

	return 0;
}
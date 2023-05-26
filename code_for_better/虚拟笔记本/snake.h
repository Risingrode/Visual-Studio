#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

void BackGround(unsigned int ForeColor = 7, unsigned int BackGroundColor = 0) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  //��ȡ����̨�ľ��
	SetConsoleTextAttribute(handle, ForeColor + BackGroundColor * 0x10);//�ı䵱ǰ���ı�����������ɫ
}

void gotoxy(int xx, int yy) {//�ƶ����
	//xָ���� yָ����
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ�豸���
	COORD pos;//�趨cmd�����������
	pos.X = xx;
	pos.Y = yy;
	SetConsoleCursorPosition(handle, pos);//�ƶ���굽ָ��λ��
	return;
}
int basex = 30, basey = 1;

typedef struct {
	int direct, len, vict, graph;//���� ���� ʤ�� ����
}look;
look check;
//��ʼ����ͼ����
void restart(int bk[20][15], int move[20][15]) {
	//bkΪ�ܵĵ�ͼ���ݼ�¼������ͼ��Ϊ1ʱ��ʾǽ�壬Ϊ2ʱ��ʾ��ʵ��Ϊ3ʱ��ʾ��
	//move��¼���߹���·�̣�������ӡ��ʱ�ж���
	int pp, qq;  //������¼��ȡ���������

	//������Ҫ��ʼ��������ͼ
	for (int i = 0; i <= 16; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == 0 || i == 16 || j == 0 || j == 14)  bk[i][j] = 1;//�߽��ж� ��Ϊǽ��
			else bk[i][j] = 0; //0��ʾʲô��û��
			move[i][j] = 0;    //������������¼���ƶ��Ĺ켣
		}
	}

	//���߳�ʼ����8,8������
	bk[8][8] = 3;
	move[8][8] = 1;//����״̬
	move[0][0] = 1;//�ô�����¼����
	pp = rand() % 15;//��Χ��1-14
	qq = rand() % 15;
	bk[pp][qq] = 2;//��ʾ���λ���й�ʵ��
	check.direct = 1;//��ʾ����,����
	check.len = 1;//��ʾ����
	check.vict = 0;//��Ϊ1�Ǳ�ʾʧ��
	check.graph = 0;//��¼�÷�

	//������Ҫ���Ƶ�ͼ
	for (int i = 0; i <= 16; i++) {
		for (int j = 0; j < 15; j++) {
			gotoxy(basex + i * 2, basey + j);//����ƶ�,ÿ����궼�Ǿ���
			switch (bk[i][j]) {//�жϵ�ǰ���������
			case 0:
				BackGround(0, 0);
				break;//���û�ж�����ӡ��ɫ
			case 1:
				BackGround(0, 1);
				break;//ǽ��ӡ��ɫ
			case 2:
				BackGround(7, 0);
				printf("��");
				break;//��ʵ��ӡ��ɫ
			case 3:
				BackGround(0, 3);
				break;//�ߴ�ӡ����ɫ
			default:
				break;
			}
			printf("  ");//��ͼ��ֱ�Ӿ���Ϳ�ո��(��ɫ����)
		}
	}

	//������Ҫ��ʾ����//
	gotoxy(basex + 35, basey + 0);
	BackGround(0, 7);
	printf("���ڵ÷���:%d,���ٽ�����!^_^", check.vict);
}


//**�˶�����**//
void main_map(int bk[20][15], int xy[2], int move[20][15]) {
	//bk�ǵ�ͼ��Ϣ��xy��¼���꣬move��¼�ߵ��˶��켣
	int b[10], qq = 0, pp = 0;//b�����������룬qq��pp���������ʼ����ʵ����
	if (_kbhit()) {//��¼���µ����ĸ������
		b[0] = _getch();//��b����¼
		if (b[0] == 224)  b[0] = _getch();//���Ϊ224��ʾΪ�����������Ҫ��һ�λ�ȡ����
		if (b[0] == 72 && check.direct != 2)
			//��������Ϊ�ϲ��ҳ���Ϊ��
			check.direct = 1;
		if (b[0] == 80 && check.direct != 1)
			check.direct = 2;
		if (b[0] == 75 && check.direct != 4)
			check.direct = 3;
		if (b[0] == 77 && check.direct != 3)
			check.direct = 4;
	}
	switch (check.direct) {
	case 1:
		//������
		xy[1]--;
		break;
	case 2:
		//������
		xy[1]++;
		break;
	case 3:
		//������
		xy[0]--;
		break;
	case 4:
		//������
		xy[0]++;
		break;
	}

	//�������߾Ϳ�ʼ�߶���//
	move[0][0]++;//�ߵĲ�����һ
	move[xy[0]][xy[1]] = move[0][0];//��¼��ǰ�������ߵĹ켣
	gotoxy(basex + 35, basey + 2);
	BackGround(0, 7);
	printf("������:%d,������:%d  ", xy[0], xy[1]);
	gotoxy(basex + xy[0] * 2, basey + xy[1]);//������ͷ����ǰ�ƶ���
	BackGround(0, 3);//������һ����ɫ
	printf("  ");

	//������˹�ʵ//
	if (bk[xy[0]][xy[1]] == 2) {
		check.vict++;//������һ
		check.len++;//���ȼ�һ
		//���·���
		gotoxy(basex + 35, basey + 0);
		BackGround(0, 7);
		printf("���ڵ÷���:%d,���ٽ�����!^_^", check.vict);
		while (bk[pp][qq] != 0) {
			pp = rand() % 15;
			qq = rand() % 15;
		}
		bk[pp][qq] = 2;//������ط���Ϊ��ʵ
		gotoxy(basex + pp * 2, basey + qq);
		BackGround(7, 0);
		printf("��");
	}

	//���ײ��ǽ�����Լ�//
	if (bk[xy[0]][xy[1]] == 1 || bk[xy[0]][xy[1]] == 3) {
		check.graph = 1;//��ʾ�Ѿ�����
		gotoxy(basex + 6, basey + 6);
		BackGround(0, 7);
		printf("�����ˣ����÷�:%d", check.vict);
		return;
	}

	bk[xy[0]][xy[1]] = 3;//ʹ���λ�ñ����
	//������Ҫ�����Ȼ��ˢ���ߵ�λ��//
	for (int i = 0; i <= 16; i++)
		for (int j = 0; j < 15; j++) {
			if (move[i][j] == move[xy[0]][xy[1]] - check.len) {
				//��������������,���ʾ���Ѿ��ƶ������λ����
				//Ҫɾ�����λ�õ���β��
				//һ��ֻ��һ����������Ҫ��
				bk[i][j] = 0;
				gotoxy(basex + i * 2, basey + j);
				BackGround(0, 0);
				printf("  ");
				break;//һ��ֻ��һ��-
			}
		}
}
int load_shake() {
	int bk[20][15], xy[2], move[20][15];
	xy[1] = xy[0] = 8;
	srand((unsigned)time(NULL));//��ʼ���������
	printf("�밴���������...");
	_getch();
	restart(bk, move);
	while (check.graph == 0) {
		Sleep(200);//����400msһ��
		main_map(bk, xy, move);
	}

	return 0;
}
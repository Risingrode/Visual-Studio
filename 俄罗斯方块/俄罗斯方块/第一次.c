/*#include<windows.h>
#include<conio.h>
int c;
int T, X, Y, i, j, k, map[250] = { 0 }, node[28][4] = {
	1,2,3,4,5,6,7,8,9,10,11,12,13,14,1,2,3,4,5,
	6,7,8,9,10,11,12,13,14,1,2,3,4,5,6,7,8,9,
	10,11,12,13,14,1,2,3,4,5,6,7,8,9,10,11,12,13,14,
};
int move(int* v, int l) {
	for (*v += 1; i == 0; i < 4 && (j = (node[T][i] + 11) % 10 - 1 + X, 1));
	if ((j < 3 || 6 < j || 9 < (node[T][i] + 11) / 10 - 1 + Y ||
		map[node[T][i] + Y * 10 + X]) && (*v -= 1, 1))
		return 0;
	return 1;
}
void down() {
	if (move(&Y, 1) || Y < 2 && (exit(!_getch()), 0))return;
	for (i = 0; i < 4 && (map[node[T][i] + Y * 10 + X] == 1); i++);
	for (i = 150, k = 0; i > 9 || (c == 0); i % 10 == 0 && (k =0))
		if (--i, (k += map[i]) == 10)
			for (j = i + 9; j > 9 || (i += 10, 0); map[j] = map[j - 10], j--);
}
int main() {
	srand((unsigned)malloc(!system("mode con:cols=20,lines=25")));
	for (; c || (X = 4, Y = 1, T = rand() % 7 * 4, c == 1); down(), Sleep(150)) {
		if (_kbhit() && (c = _getch())) {
			if (c == 'w' || c == 'W')move(&T, (T % 4) < 3 ? 1 : -3);
			else if (c == 'd' || c == 'D')X < 9 && move(&X, 1);
			else if (c == 'a' || c == 'A')0 < X && move(&X, -1);
			else if (c == 's' || c == 'S')down();
		}
		for (i = system("cls"); i < 4 && (map[node[T][i] + Y * 10 + X] == -1); i++);
		for (i = 0; i < 250; i++)_cputs(map[i] ? "[]" : ""), map[i] += map[i] < 0;
	}
}*/









/*
#include<iostream>
using namespace std;

int  main() {

	return 0;
}
*/

/*
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int a[4] = { -1,1,0,0 };
int b[4] = { 0,0,-1,1 };

int n = 30, m = 60;
vector<string>v(n);

int isOK(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int X = x, Y = y;
		X += a[i], Y += b[i];
		if (X < 0 || X >= n || Y<0 || Y >= m || v[x][y]>v[X][Y])
			return false;
	}
	return true;
}


int  main() {

	int ans = 0;
	for (int i = 0; i < n; i++)cin >> v[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (isOK(i, j))ans++;
		}
	}
	cout << ans;
	return 0;
}
*/



/*
PHQGHUMEAYLNLFDXFIRCVSCXGGBWKFNQDUXWFNFOZVSRTKJPREPGGXRPNRVY
STMWCYSYYCQPEVIKEFFMZNIMKKASVWSRENZKYCXFXTLSGYPSFADPOOEFXZBC
OEJUVPVABOYGPOEYLFPBNPLJVRVIPYAMYEHWQNQRQPMXUJJLOOVAOWUXWHMS
NCBXCOKSFZKVATXDKNLYJYHFIXJSWNKKUFNUXXZRZBMNMGQOOKETLYHNKOAU
GZQRCDDIUTEIOJWAYYZPVSCMPSAJLFVGUBFAAOVLZYLNTRKDCPWSRTESJWHD
IZCOBZCNFWLQIJTVDWVXHRCBLDVGYLWGBUSBMBORXTLHCSMPXOHGMGNKEUFD
XOTOGBGXPEYANFETCUKEPZSHKLJUGGGEKJDQZJENPEVQGXIEPJSRDZJAZUJL
LCHHBFQMKIMWZOBIWYBXDUUNFSKSRSRTEKMQDCYZJEEUHMSRQCOZIJIPFION
EEDDPSZRNAVYMMTATBDZQSOEMUVNPPPSUACBAZUXMHECTHLEGRPUNKDMBPPW
EQTGJOPARMOWZDQYOXYTJBBHAWDYDCPRJBXPHOOHPKWQYUHRQZHNBNFUVQNQ
QLRZJPXIOGVLIEXDZUZOSRKRUSVOJBRZMWZPOWKJILEFRAAMDIGPNPUUHGXP
QNJWJMWAXXMNSNHHLQQRZUDLTFZOTCJTNZXUGLSDSMZCNOCKVFAJFRMXOTHO
WKBJZWUCWLJFRIMPMYHCHZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCPXIFB
XVFBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJRXJHGUZYUPZWWEIQURPIX
IQFLDUUVEOOWQCUDHNEFNJHAIMUCZFSKUIDUBURISWTBRECUYKABFCVKDZEZ
TOIDUKUHJZEFCZZZBFKQDPQZIKFOBUCDHTHXDJGKJELRLPAXAMCEROSWITDP
TPCCLIFKELJYTIHRCQAYBNEFXNXVGZEDYYHNGYCDRUDMPHMECKOTRWOSPOFG
HFOZQVLQFXWWKMFXDYYGMDCASZSGOVSODKJGHCWMBMXRMHUYFYQGAJQKCKLZ
NAYXQKQOYZWMYUBZAZCPKHKTKYDZIVCUYPURFMBISGEKYRGZVXDHPOAMVAFY
RARXSVKHTQDIHERSIGBHZJZUJXMMYSPNARAEWKEGJCCVHHRJVBJTSQDJOOTG
PKNFPFYCGFIEOWQRWWWPZSQMETOGEPSPXNVJIUPALYYNMKMNUVKLHSECDWRA
CGFMZKGIPDFODKJMJQWIQPUOQHIMVFVUZWYVIJGFULLKJDUHSJAFBTLKMFQR
MYJFJNHHSSQCTYDTEAMDCJBPRHTNEGYIWXGCJWLGRSMEAEARWTVJSJBAOIOJ
LWHYPNVRUIHOSWKIFYGTYDHACWYHSGEWZMTGONZLTJHGAUHNIHREQGJFWKJS
MTPJHAEFQZAAULDRCHJCCDYRFVVRIVUYEEGFIVDRCYGURQDREDAKUBNFGUPR
OQYLOBCWQXKZMAUSJGMHCMHGDNMPHNQKAMHURKTRFFACLVGRZKKLDACLLTEO
JOMONXRQYJZGINRNNZWACXXAEDRWUDXZRFUSEWJTBOXVYNFHKSTCENAUMNDD
XFDMVZCAUTDCCKXAAYDZSXTTOBBGQNGVVPJGOJOGLMKXGBFCPYPCKQCHBDDZ
WRXBZMQRLXVOBTWHXGINFGFRCCLMZNMJUGWWBSQFCIHUBSJOLLMSQSGHMCPH
ELSOTFLBGSFNPCUZSRUPCHYNVZHCPQUGRIWNIQXDFJPWPXFBLKPNPEELFJMT


  */


/*
#include<iostream>
#include<vector>
using namespace std;

int  main() {
	vector<vector<int>>v(100,vector<int>(100));
	v[0][0] = 1;
	for (int i = 1; i < 100; i++)v[i][0] = v[i - 1][0] + 1;
	for (int i = 0; i < 100; i++) {
		for (int j = 1; j < 100; j++) {
			v[i][j] = v[i][j - 1] + 2;
		}
	}
	for (int i = 30; i < 100; i++) {
		for (int j = 30; j < 100; j++) {
			//cout<<v[i][j]<<" ";

			int ans = 0;
			for (int k = 0; k < 12; k++)
				for (int p = 0; p < 1; p++)
					if (i + k < 100 && j + p < 100)
						ans += v[i + k][j + p];
			if (ans == 2022)cout << "ok"<<endl;

		}
		
	}

	return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main() {
	int s, t;
	cin >> s >> t;
	if (t > s)
		cout << t - s << endl;
	else {
		cout << t + 7 - s << endl;
	}

	return 0;
}
*/

/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a')
			s[i] = 'A';
		else if(s[i] == 'e')
			s[i] = 'E';
		else if (s[i] == 'i')
			s[i] = 'I';
		else if (s[i] == 'o')
			s[i] = 'O';
		else if (s[i] == 'u')
			s[i] = 'U';
	}
	cout << s << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int test(string a, string b) {
	int sec1 = 0, sec2 = 0;
	sec1 = ((a[0] - '0') * 10 + (a[1] - '0')) * 3600 + ((a[3] - '0') * 10 + (a[4] - '0')) * 60 + (a[6] - '0') * 10 + (a[7] - '0');
	sec2 = ((b[0] - '0') * 10 + (b[1] - '0')) * 3600 + ((b[3] - '0') * 10 + (b[4] - '0')) * 60 + (b[6] - '0') * 10 + (b[7] - '0');
	return sec2 - sec1;
}
int main() {
	int ans = 0, T = 0, U = 0, I = 0;
	string s, s1;
	cin >> T;
	T--;
	cin >> s >> U >> I;
	while (T--) {
		cin >> s1;
		ans += test(s, s1) * U * I;
		cin >> U >> I;
		s = s1;
	}
	cout << ans << endl;
	return 0;
}*/


/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n, m;
vector<string>v(100);
//вСоб сроб
int dx[2] = { 1,1 };
int dy[2] = { -1,1 };

int isOk(int x, int y) {
	int flag = 0;
	int X = x, Y = y;
	for (int i = 1; i <= n; i++) {
		X += 1, Y += 1;
		if (X<0||Y<0||X == n || Y == m || v[x][y] != v[x][Y]|| v[x][y] != v[X][y])
			break;
		int x1 = x, y1 = Y;
		for (int j = 1; j < i; j++) {
			x1 += dx[0], y1 += dy[0];
			if (v[x1][y1] != v[x][Y]) {
				flag--;
				break;
			}
		}
		flag++;
	}

	X = x, Y = y;
	for (int i = 1; i <= n; i++) {
		X += 1, Y -= 1;
		if (X < 0 || Y < 0 || X == n || Y == m || v[x][y] != v[x][Y] || v[x][y] != v[X][y])
			break;
		int x1 = x, y1 = Y;
		for (int j = 1; j < i; j++) {
			x1 += dx[1], y1 += dy[1];
			if (v[x1][y1] != v[x][Y]) {
				flag--;
				break;
			}
		}
		flag++;
	}
	X = x, Y = y;
	for (int i = 1; i <= n; i++) {
		X -= 1, Y += 1;
		if (X < 0 || Y < 0 || X == n || Y == m || v[x][y] != v[x][Y] || v[x][y] != v[X][y])
			break;
		int x1 = X, y1 = y;
		for (int j = 1; j < i; j++) {
			x1 += dx[1], y1 += dy[1];
			if (v[x1][y1] != v[X][y]) {
				flag--;
				break;
			}
		}
		flag++;
	}
	X = x, Y = y;
	for (int i = 1; i <= n; i++) {
		X -= 1, Y -= 1;
		if (X < 0 || Y < 0 || X == n || Y == m || v[x][y] != v[x][Y] || v[x][y] != v[X][y])
			break;
		int x1 = X, y1 = y;
		for (int j = 1; j < i; j++) {
			x1 += dx[0], y1 += dy[0];
			if (v[x1][y1] != v[X][y]) {
				flag--;
				break;
			}
		}
		flag++;
	}
	return flag;
}

int main() {
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i < n; i++)cin >> v[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			int flag = isOk(i, j);
			ans += flag;
		}
	cout << ans;
	return 0;
}
*/



/*
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	string s;
	map<char, int>m;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]] = min(m[s[i]], i);
	}
	cout << m['A'] << endl;
	return 0;
}*/























#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<stdio.h>
#include<WinSock2.h>
#pragma comment(lib, "ws2_32.lib")//���ļ�
using namespace std;

/*http://www.netbian.com/dest/7535.htm
* url��Ϊ������
* 1.Э��		http����https
* 2.������	��ַ��www.netbian.com   ��ip��ַ183.61.190.207
* 3.��Դ��	/dest/7535.htm
* 
*/
typedef struct Spider {
	char host[128];
	char resPath[128];

}Spider;

void parseUrl(const char* url, char* host, char* res);

//��ȡ��Դ
void Spider_init(Spider* spider, const char* url) {
	memset(spider->host, 0, sizeof(spider->host));
	memset(spider->resPath, 0, sizeof(spider->resPath));
	parseUrl(url, spider->host, spider->resPath);

}


//����url����ȡ����������Դ·��
void parseUrl(const char* url,char* host,char* res) {
	if (!url)
		return;



}

//���ӵ�������
void spider_connect(string host,string res) {
	//��socket				ȷ����ʲô�ֻ�
	WSADATA wsadata;
	WSAStartup(MAKEWORD(2, 2), &wsadata);

	//����socket		ȥ���ֻ�
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd==SOCKET_ERROR) {//���ֻ����ܻ�ʧ��
		cout << "����socketʧ�ܣ��������ǣ�"<<WSAGetLastError() << endl;
		return;
	}
	//ͨ��������ȡid��ַ

	HOSTENT* hent = gethostbyname(host);
	if (!hent) {
		cout << "��ȡʧ�ܣ��������ǣ�" << WSAGetLastError() << endl;
		return ;
	}
	
	//���ӷ�����
	SOCKADDR_IN addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(80);//�˿ں�
	//addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	memcpy(&addr.sin_addr, hent->h_addr, sizeof(IN_ADDR));
	if (SOCKET_ERROR == connect(fd, &addr, sizeof(addr))) {
		cout << "����ʧ�ܣ�" << WSAGetLastError() << endl;
	};
}


//��ȡ��ҳ
void getHtml(string host, string res) {
	//���ӷ�����
	spider_connect(spider);


}


//����ͼƬ


int main() {
	cout << "������Ҫ��ȡ����ַ>";
	char url[128]="http://www.netbian.com/dest/7535.htm";
	cin >> url;
	puts(url);

	Spider sp;
	Spider_init(&sp, url);

	cout << "Host:" << sp.host <<endl<< "res:" << sp.resPath << endl;

	getchar();

	return 0;
}







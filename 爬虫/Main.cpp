#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<stdio.h>
#include<WinSock2.h>
#pragma comment(lib, "ws2_32.lib")//库文件
using namespace std;

/*http://www.netbian.com/dest/7535.htm
* url分为三部分
* 1.协议		http或者https
* 2.主机名	网址：www.netbian.com   与ip地址183.61.190.207
* 3.资源名	/dest/7535.htm
* 
*/
typedef struct Spider {
	char host[128];
	char resPath[128];

}Spider;

void parseUrl(const char* url, char* host, char* res);

//获取资源
void Spider_init(Spider* spider, const char* url) {
	memset(spider->host, 0, sizeof(spider->host));
	memset(spider->resPath, 0, sizeof(spider->resPath));
	parseUrl(url, spider->host, spider->resPath);

}


//解析url，获取主机名和资源路径
void parseUrl(const char* url,char* host,char* res) {
	if (!url)
		return;



}

//连接到服务器
void spider_connect(string host,string res) {
	//打开socket				确定买什么手机
	WSADATA wsadata;
	WSAStartup(MAKEWORD(2, 2), &wsadata);

	//创建socket		去买手机
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd==SOCKET_ERROR) {//买手机可能会失败
		cout << "创建socket失败！错误码是："<<WSAGetLastError() << endl;
		return;
	}
	//通过域名获取id地址

	HOSTENT* hent = gethostbyname(host);
	if (!hent) {
		cout << "获取失败！错误码是：" << WSAGetLastError() << endl;
		return ;
	}
	
	//连接服务器
	SOCKADDR_IN addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(80);//端口号
	//addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	memcpy(&addr.sin_addr, hent->h_addr, sizeof(IN_ADDR));
	if (SOCKET_ERROR == connect(fd, &addr, sizeof(addr))) {
		cout << "连接失败！" << WSAGetLastError() << endl;
	};
}


//获取网页
void getHtml(string host, string res) {
	//连接服务器
	spider_connect(spider);


}


//下载图片


int main() {
	cout << "请输入要爬取的网址>";
	char url[128]="http://www.netbian.com/dest/7535.htm";
	cin >> url;
	puts(url);

	Spider sp;
	Spider_init(&sp, url);

	cout << "Host:" << sp.host <<endl<< "res:" << sp.resPath << endl;

	getchar();

	return 0;
}







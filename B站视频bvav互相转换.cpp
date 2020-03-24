#include"pch.h"
#include<windows.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
void gotoxy(int x, int y) {
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
string add(string str1, string str2) {
	string str;
	int len1 = str1.length();
	int len2 = str2.length();
	if (len1 < len2) {
		for (int i = 1; i <= len2 - len1; i++)
			str1 = "0" + str1;
	}
	else {
		for (int i = 1; i <= len1 - len2; i++)
			str2 = "0" + str2;
	}
	len1 = str1.length();
	int cf = 0;
	int temp;
	for (int i = len1 - 1; i >= 0; i--) {
		temp = str1[i] - '0' + str2[i] - '0' + cf;
		cf = temp / 10;
		temp %= 10;
		str = char(temp + '0') + str;
	}
	if (cf != 0)  str = char(cf + '0') + str;
	return str;
}
int main() {
	ifstream in;
	ofstream out;
	string uid, str1, str2, str3, up1, up2, up3, n1, avh;
	int l, l2;
	int x;
	cout << "请选择模式：1:av-bv  2.bv-av \n";
	cin >> x;
	if (x == 1) {
		cout << "请输入av号\n";
		cin >> uid;
		char c[400], uc[600];
		up2 = " ','C:\\bilibili_up_tool\\temp\\space.txt')";
		str1 = "powershell (new-object System.Net.WebClient).DownloadFile( 'https://api.bilibili.com/x/web-interface/view?aid=";
		//	cout<<"请输入AV号:"<<endl;
		//	cin>>uid;
		str2 = "','C:\\2.txt')";
		str3 = str1 + uid + str2;
		for (int i = 0; i < str3.length(); ++i)
			c[i] = str3[i];
		//	cout<<c;
		int view = 0;
		string a, st;
		while (1) {
			system(c);
			view = 0;
			cout << "AV" << uid << ":  bvid:";
			in.open("C:\\2.txt");
			in >> a;
			//	getline(cin,a);
			//	cout<<a;
			for (int i = 1; i < a.length(); i++) {
				if (a[i] == 'b'&&a[i + 1] == 'v'&&a[i + 3] == 'd') {

					for (int j = i + 7; j <= i + 7 + 11; j++) {
						cout << a[j];
					}
					break;
				}

			}
			in.close();
			cout << endl;
			system("pause");
			return 0;
		}
	}
	else if (x == 2) {
		cout << "请输入bv号\n";
		cin >> uid;
		char c[400], uc[600];
		up2 = " ','C:\\bilibili_up_tool\\temp\\space.txt')";
		str1 = "powershell (new-object System.Net.WebClient).DownloadFile( 'https://api.bilibili.com/x/web-interface/view?bvid=";
		//	cout<<"请输入AV号:"<<endl;
		//	cin>>uid;
		str2 = "','C:\\2.txt')";
		str3 = str1 + uid + str2;
		for (int i = 0; i < str3.length(); ++i)
			c[i] = str3[i];
		//	cout<<c;
		int view = 0;
		string a, st;
		//	cout<<str3;
		while (1) {
			system(c);
			cout << uid << "  avid:";
			in.open("C:\\2.txt");
			in >> a;
			//	getline(cin,a);
			//	cout<<a;
			int avid = 0;
			for (int i = 1; i < a.length(); i++) {
				if (a[i] == 'a'&&a[i + 1] == 'i'&&a[i + 2] == 'd') {

					for (int j = i + 5; a[j] >= '0'&&a[j] <= '9'; j++) {
						cout << a[j];
					}
					break;
				}

			}
			in.close();
			//		cout<<avid;
			cout << endl;
			system("pause");
			return 0;
		}
	}
	else {
		system("pause");
		return 0;
	}

}

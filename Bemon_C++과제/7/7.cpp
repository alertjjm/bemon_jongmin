// 7.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string text;
	int len,i;
	string exit = "exit";
	cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
	while (1) {
		cout << ">> ";
		getline(cin, text, '\n');
		if (text == exit)
			break;
		len = text.length();
		for (i = 0; i < len; i++)
			cout << text[len - i - 1];
		cout << endl;
	}
    return 0;
}


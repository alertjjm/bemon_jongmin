// cinstring1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int _tmain(int argc, _TCHAR*argv[])
{
	int nAge;
	cout << "나이를 입력하세요." << endl;
	cin >> nAge;
	getchar();
	string strJob;
	cout << "직업을 입력하세요." << endl;
	cin >> strJob;
	getchar();
	string strName;
	cout << "이름을 입력하세요." << endl;
	cin >> strName;
	cout << "당신의 이름은 " << strName << "이고, " << "나이는 " << nAge << "살이며, " << "직업은 " << strJob << "입니다." << endl;
	return 0;
}


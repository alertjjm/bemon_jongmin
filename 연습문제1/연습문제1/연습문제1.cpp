// 연습문제1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	cout << "이름: ";
	cin >> name;
	getchar();
	int age;
	cout << "나이: ";
	cin >> age;
	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl;
    return 0;
}


// autosample.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a = 10;
	int b(a);
	auto c(b);
	cout << a + b + c << endl;
    return 0;
}


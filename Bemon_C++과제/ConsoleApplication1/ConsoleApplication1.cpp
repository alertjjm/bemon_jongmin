// ConsoleApplication1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 10,20,30,40,50 };
	for (auto &n : aList)
		cout << n << ' ';
	cout << endl;
    return 0;
}


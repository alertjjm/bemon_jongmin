// Cmystring.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Mystring.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	CMystring a;
	a.SetString("hello");
	cout << a.GetString()<<endl;
	a.Release();
    return 0;
}


// Cmystring.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Mystring.h"
#include<iostream>
using namespace std;
void TestFunc(const CMystring &strParam) {
	cout << strParam << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	CMystring strData("hello");
	::TestFunc(strData);
	::TestFunc(CMystring("World"));
    return 0;
}


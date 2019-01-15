// autosample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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


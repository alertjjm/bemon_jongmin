// Referenceswap.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void Swap(int &a, int &b) {
	int nTmp = a;
	a = b;
	b = nTmp;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int x = 10, y = 20;
	Swap(x, y);
	cout << x << endl;
	cout << y << endl;
    return 0;
}


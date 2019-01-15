// Referencetype.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int nData = 10;
	int &ref = nData;
	ref = 20;
	cout << nData << endl;
	int*pnData = &nData;
	*pnData = 30;
	cout << nData << endl;
    return 0;
}


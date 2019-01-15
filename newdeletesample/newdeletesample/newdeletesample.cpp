// newdeletesample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include"stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR *argv[])
{
	int *pData = new int;
	int *pNewData = new int(10);
	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;
	delete pData;
	delete pNewData;

    return 0;
}


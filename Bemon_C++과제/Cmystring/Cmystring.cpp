// Cmystring.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	CMystring strLeft("hello"), strRight("world"), strResult;
	strResult = strLeft + strRight;
	cout << strResult<< endl;
	cout << strLeft << endl;
	strLeft += CMystring("World");
	cout << strLeft << endl;
    return 0;
}


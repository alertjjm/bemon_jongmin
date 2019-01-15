// RvalueSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int TestFunc(int nParam) {
	int nResult = nParam * 2;
	return nResult;
}
int _tmain(int argc, _TCHAR*argv[])
{
	int nInput = 0;
	cout << "input number: ";
	cin >> nInput;
	int &&rdata = nInput + 5;
	cout << rdata << endl;
	int&&result = TestFunc(10);
	result += 10;
	cout << result << endl;

    return 0;
}


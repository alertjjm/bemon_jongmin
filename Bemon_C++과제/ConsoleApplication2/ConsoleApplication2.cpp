// ConsoleApplication2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CTest {
	int m_nData;
public:
	CTest(int nParam) :m_nData(nParam) {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		if (m_nData == 1) {
			cout << "~CTest::CTest() A" << endl;
		}
		else {
			cout << "~CTest::CTest() B" << endl;
		}
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;
    return 0;
}


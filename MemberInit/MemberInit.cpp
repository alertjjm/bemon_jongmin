// MemberInit.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CTest {
public:
	CTest() {
		m_nData = 10;
	}
	int m_nData;

	void PrintData(void);
};
void CTest::PrintData(void) {
	cout << m_nData << endl;
}
int _tmain(int argc, TCHAR* argv[])
{
	CTest t;
	t.PrintData();
    return 0;
}


// MemberInit.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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


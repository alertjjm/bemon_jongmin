// ConstMethod2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


class CTest {
public:
	CTest(int nParam) :m_nData(nParam) {};
	~CTest(){}
	int GetData() const{
		m_nData = 20;
		return m_nData;
	}
private:
	mutable int m_nData=0;
};
int _tmain(int argc, TCHAR* argv[])
{
	CTest a(10);
	cout << a.GetData() << endl;
    return 0;
}


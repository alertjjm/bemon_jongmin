// RefSample.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


class CRefTest {
public:
	CRefTest(int &rParam) : m_Data(rParam) {};
	int GetData() { return m_Data; }
private:
	int &m_Data;
};
int _tmain(int argc, TCHAR* argv[])
{
	int a = 10;
	CRefTest t(a);
	cout << t.GetData() << endl;
	a = 20;
	cout << t.GetData() << endl;

    return 0;
}


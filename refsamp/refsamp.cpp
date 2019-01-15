// RefSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
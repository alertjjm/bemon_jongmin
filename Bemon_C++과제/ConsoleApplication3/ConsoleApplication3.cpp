// ConsoleApplication3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData {
public:
	CMyData(int nParam) :m_nData(nParam) {};
	void PrintData(CMyData* pData){
		CMyData *this = pData;
		cout << m_nData << endl;
		cout << CMyData::m_nData << endl;
		cout << this->CMyData::m_nData << endl;
		
	}

private:
	int m_nData;

};


int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(5);
	a.PrintData(&a);
    return 0;
}


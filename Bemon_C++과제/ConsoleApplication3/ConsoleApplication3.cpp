// ConsoleApplication3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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


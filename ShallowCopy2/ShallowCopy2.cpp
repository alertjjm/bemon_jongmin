// ShallowCopy2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CMyData {
public:
	CMyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	CMyData(const CMyData &rhs) {
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~CMyData() {
		delete m_pnData;
	}
	CMyData& operator=(const CMyData &rhs) {
		*m_pnData = *rhs.m_pnData;
		return *this;
	}
	int GetData() {
		if (m_pnData != NULL)
			return *m_pnData;
		return 0;
	}
private:
	int *m_pnData = nullptr;
};
int _tmain(int argc, TCHAR* argv[])
{
	CMyData a(10);
	CMyData b(20);
	a = b;
	cout << a.GetData() << endl;
	return 0;

    return 0;
}


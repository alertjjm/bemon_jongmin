// VirtualDestruc.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CMyData {
public:
	CMyData() { m_pszData = new char[32]; }
	virtual ~CMyData() {
		cout << "~CMyData()" << endl;
		delete m_pszData;
	}
private:	
	char*m_pszData;	
};

class CMyDataEx : public CMyData {
public:
	CMyDataEx() { m_pnData = new int; }
	~CMyDataEx() {
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}
private:
	int *m_pnData;
};

int main()
{
	CMyData *pData = new CMyDataEx;
	delete pData;
    return 0;
}


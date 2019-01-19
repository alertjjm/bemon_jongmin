// vTableSample.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

class CMyData {
public:
	CMyData() {
		cout << "CMyData" << endl;
	}
	virtual ~CMyData(){}
	virtual void TestFunc1(){}
	virtual void TestFunc2() {}
};




class CMyDataEx : public CMyData {
public:
	CMyDataEx(){
		cout << "CMyDataEx()" << endl;
	}
	virtual ~CMyDataEx(){}
	virtual void TestFunc1(){}
	virtual void TestFunc2() {
		cout << "TestFunc2()" << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData* pData = new CMyDataEx;
	pData->TestFunc2();
	delete pData;
	return 0;
    return 0;
}


// Template.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
class CMyData {
public:
	CMyData(T param):m_Data(param){}
	T GetData() const { return m_Data; }
	operator T() { return m_Data; }
	void SetData(T param) { m_Data = param; }
private:
	T m_Data;
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData<int> a(4);
	cout << a << endl;
	CMyData<double> b(123.45);
	cout << b << endl;
	CMyData<char*>c("hello");
	cout << c << endl;
    return 0;
}


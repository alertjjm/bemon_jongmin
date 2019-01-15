// ConstructorOver.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CMyPoint {
public:
	CMyPoint(int x) {
		cout << "CMyPoint(int)" << endl;
		if (x > 100)
			x = 100;
		m_x = 100;
	}
	CMyPoint(int x, int y)
		:CMyPoint(x) {
		cout << "CMyPoint(int, int)" << endl;
		if (y > 200)
			y = 200;
		m_y = 200;
	}
	void Print() {
		cout << "X:" << m_x << endl;
		cout << "Y:" << m_y << endl;
	}
private:
	int m_x=0;
	int m_y=0;
};
int _tmain(int argc, TCHAR* argv[])
{
	CMyPoint ptBegin(110);
	ptBegin.Print();
	CMyPoint ptEnd(50, 250);
	ptEnd.Print();
    return 0;
}


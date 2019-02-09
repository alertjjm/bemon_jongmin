// 3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Tower {
public:
	Tower() { height = 1; }
	Tower(int h) { height = h; }
	~Tower(){}
	int getHeight() { return height; }
private:
	int height;
};

int _tmain(int argc, _TCHAR* argv[])
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    return 0;
}


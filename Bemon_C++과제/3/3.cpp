// 3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
    return 0;
}


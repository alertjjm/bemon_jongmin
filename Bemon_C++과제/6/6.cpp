// 6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<cstdlib>
#include<ctime>
#include <iostream>
using namespace std;


class Random {
public:
	Random(){ srand((unsigned)time(NULL)); }
	~Random(){}
	int next() {
		rannum = rand();
		return rannum;
	}
	int nextInRange(int a, int b) {
		rannum = rand()%3+2;
		return rannum;
	}
private:
	int rannum;

};
int _tmain(int argc, _TCHAR* argv[])
{
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;

    return 0;
}


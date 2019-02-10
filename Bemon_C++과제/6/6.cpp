// 6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i<10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl;

    return 0;
}


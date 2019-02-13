// 15.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include<string.h>
#include <time.h>

using namespace std;

class Random {
public:
	Random() { seed(); }
	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(0)); } // 씨드 설정
	static int nextInt(int min = 0, int max = 32767) {
		int result;
		result = rand() % (max - min + 1) + min;
		return result;
	}; //min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet() {
		char ran;
		int r;
		char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		r = rand() % (strlen(str));
		return str[r];
	};
	static double nextDouble() {
		return (double)rand() / RAND_MAX;
	}; // 0보다 크거나 같고 1보다 적은 실수 리턴 
};


int main()
{
	int i;
	Random a;
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for (i = 0; i < 10; i++)
		cout << a.nextInt(1,100) << " ";
	cout << endl;
	cout << "알파벳을 랜덤하게 10개 출력합니다." << endl;
	for (i = 0; i < 10; i++)
		cout << a.nextAlphabet() << " ";
	cout << endl;
	cout << "랜덤한 실수 10개를 출력합니다." << endl;
	for (i = 0; i < 5; i++)
		cout << a.nextDouble() << " ";
	cout << endl;
	for (i = 0; i < 5; i++)
		cout << a.nextDouble() << " ";
	cout << endl;
    return 0;
}


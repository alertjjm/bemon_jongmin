// 1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int total = 0;
	char s;
	while (total < 20000) {
		system("cls");
		cout << "[A]mericano: 2300 won" << endl;
		cout << "[E]spresso: 2000 won" << endl;
		cout << "[C]appuccino: 2500 won" << endl;
		cout << "총 번 돈: " << total <<"\n"<< endl;
		cout << "주문: ";
		cin >> s;
		switch (s) {
		case 'A':
			total += 2300;
			break;
		case 'E':
			total += 2000;
			break;
		case 'C':
			total += 2500;
			break;
		}
	}
	system("cls");
	cout << "총 번 돈: " << total << "\n" << endl;
	cout << "카페를 닫는다." << endl;
    return 0;
}


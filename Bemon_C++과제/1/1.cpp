// 1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		cout << "�� �� ��: " << total <<"\n"<< endl;
		cout << "�ֹ�: ";
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
	cout << "�� �� ��: " << total << "\n" << endl;
	cout << "ī�並 �ݴ´�." << endl;
    return 0;
}


// 15.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767) {
		int result;
		result = rand() % (max - min + 1) + min;
		return result;
	}; //min�� max ������ ���� ���� ����
	static char nextAlphabet() {
		char ran;
		int r;
		char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		r = rand() % (strlen(str));
		return str[r];
	};
	static double nextDouble() {
		return (double)rand() / RAND_MAX;
	}; // 0���� ũ�ų� ���� 1���� ���� �Ǽ� ���� 
};


int main()
{
	int i;
	Random a;
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for (i = 0; i < 10; i++)
		cout << a.nextInt(1,100) << " ";
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�." << endl;
	for (i = 0; i < 10; i++)
		cout << a.nextAlphabet() << " ";
	cout << endl;
	cout << "������ �Ǽ� 10���� ����մϴ�." << endl;
	for (i = 0; i < 5; i++)
		cout << a.nextDouble() << " ";
	cout << endl;
	for (i = 0; i < 5; i++)
		cout << a.nextDouble() << " ";
	cout << endl;
    return 0;
}


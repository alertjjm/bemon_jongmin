// Multicatch.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void ExceptTest1() {
	int nInput;
	cout << "1~10 ���� ������ �Է��ϼ���" << endl;
	cin >> nInput;
	if (nInput < 1 || nInput>10)
		throw nInput;
}
void ExceptTest2() {
	char ch;
	cout << "Menu: [A]dd\t[D]elete\t[E]xit\n" << endl;
	cin >> ch;
	if (ch!='A'&&ch!='D'&&ch!='E')
		throw ch;
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*****Begin*****" << endl;
	try {
		ExceptTest1();
		ExceptTest2();
	}
	catch (int nExp) {
		cout << "ERROR:" << nExp << "�� ������ ��� �����Դϴ�." << endl;
	}
	catch (char ch) {
		cout << "ERROR:" << ch << " �� �� ���� �޴��Դϴ�." << endl;
	}
	cout << "*****End*****" << endl;
    return 0;
}


// cinstring1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int _tmain(int argc, _TCHAR*argv[])
{
	int nAge;
	cout << "���̸� �Է��ϼ���." << endl;
	cin >> nAge;
	getchar();
	string strJob;
	cout << "������ �Է��ϼ���." << endl;
	cin >> strJob;
	getchar();
	string strName;
	cout << "�̸��� �Է��ϼ���." << endl;
	cin >> strName;
	cout << "����� �̸��� " << strName << "�̰�, " << "���̴� " << nAge << "���̸�, " << "������ " << strJob << "�Դϴ�." << endl;
	return 0;
}


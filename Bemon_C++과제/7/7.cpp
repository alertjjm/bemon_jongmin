// 7.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string text;
	int len,i;
	string exit = "exit";
	cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (1) {
		cout << ">> ";
		getline(cin, text, '\n');
		if (text == exit)
			break;
		len = text.length();
		for (i = 0; i < len; i++)
			cout << text[len - i - 1];
		cout << endl;
	}
    return 0;
}


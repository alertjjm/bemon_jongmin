// 10.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;

char &find(char a[], char c, bool&success) {
	char* ptr = strchr(a, c);
	if (ptr == NULL) {
		success = false;
		char& result = (char&)*ptr;
		return result;
	}
	char& result = (char&)*ptr;
	success = true;
	return result;
}

int main()
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm'; // 'M' ��ġ�� 'm' ���
	cout << s << endl; // "mike"�� ��µ�
    return 0;
}


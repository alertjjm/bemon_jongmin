// 2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int _tmain(int argc,_TCHAR* argv[])
{
	string arr;
	char a1[10];
	char op;
	char a2[10];
	int len,i, j,k, a,b;
	int ar[2];
	cout << "? ";
	getline(cin, arr);
	len = arr.length();
	for (i = 0; i < len; i++) {
		if (arr[i] == ' ') {
			for (k = 0; k < i; k++) {
				a1[k] = arr[k];
			}
			a1[k] = 0;
			for (j = i + 1; j < len; j++) {
				if (arr[j] == ' ') {
					op = arr[j - 1];
					for (k = j + 1; k < len; k++) {
						a2[k - (j + 1)] = arr[k];
					}
					a2[k - j-1] = 0;
					break;
				}
			}
			break;
		}
	}
	a = atoi(a1);
	b = atoi(a2);
	switch (op) {
	case'+':
		cout << arr << " = " << a + b << endl;
		break;
	case '-':
		cout << arr << " = " << a - b << endl;
		break;
	case '*':
		cout << arr << " = " << a * b << endl;
		break;
	case '/':
		cout << arr << " = " << a / b << endl;
		break;
	case '%':
		cout << arr << " = " << a % b << endl;
		break;

	}
    return 0;
}

